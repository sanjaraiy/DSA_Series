# CountSort Algorithm Implementation
This repository contains a C++ implementation of the CountSort algorithm. CountSort is a non-comparison based sorting algorithm suitable for sorting integers within a specified range.

## Overview
CountSort operates by counting occurrences of each unique element in the input array, computing the cumulative count, and placing elements in their correct positions in the output array. It works efficiently for a limited range of integers, making it suitable for scenarios where the range of input elements is known beforehand.

## Features
- **Efficient Sorting:** CountSort achieves linear time complexity O(n + k), where n is the number of elements and k is the range of input.
- **Stable Sorting:** Maintains the relative order of records with equal keys.
- **Simple Implementation:** Easy to understand and implement in scenarios where the range of elements is not very large.

## Usage
To use CountSort for sorting an array of integers:
1. Clone the repository or download the `countSort.cpp` file.
2. Compile the code using a C++ compiler.
3. Execute the compiled program, providing input integers to be sorted.

## Example
Consider an input array: [4, 2, 2, 8, 3, 3, 1]
After sorting using CountSort: [1, 2, 2, 3, 3, 4, 8]

## How to Run
Ensure you have a C++ compiler installed. Compile the code using the following command:
```bash
g++ countSort.cpp -o countSort
```
Run the executable:
```bash
./countSort
```
## code.cpp 
```cpp
#include<iostream>
#include<vector>
using namespace std;

void CountSort(vector<int> &v){
    int n=v.size();

    //find the max element
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
         
        // if(max_ele<v[i]){
        //     max_ele=v[i];
        // }

        max_ele=max(v[i],max_ele);

    }
    
    //create the freq array
    vector<int>freq(max_ele+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }

    //calculate cumulative freq
    for(int i=1;i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }

    //create  the ans array
      vector<int>ans(n);

    //calculate sorted array
    for(int i=n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }

    //copy back the ans to origional array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }

}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    CountSort(v);
    cout<<"sorted Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
```
## Contribution
Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

