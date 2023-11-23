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