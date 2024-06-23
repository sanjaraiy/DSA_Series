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

```
## Contribution
Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

