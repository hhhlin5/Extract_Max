/*
  Quiz 7: Extract Max

  Write C++ code for a function, extractMax() that takes as input 
  a max heap, arr represented as an integer array and the size of 
  the array, size. The function deletes the maximum element in the 
  max heap and returns the new max heap array after deletion.

  Sample Input:
    3
    9 8 7
  
  Sample Output:
    8 7
		
	Explanation:

	Input:  Line 1 denotes the number of elements, size in the 
            heap. Line 2 denotes the contents of the max heap 
            that is passed into extractMax() function.
	
	Output: Output is the max heap after deletion.
*/

#include <iostream>

int* extractMax(int arr[], int size)
{
    // The arr[] is a sorted array
    // 1. Remove the item in the root node by replacing it with the last item in the heap
    int index = 0;
    arr[index] = arr[--size];

    // 2. while item LIH has children and one of its children is larger than LIH-->swap
    while (true)
    {
        int root_ind = index;
        int leftChild_ind = 2 * index + 1;
        int rightChild_ind = 2 * index + 2;

        if (leftChild_ind < size && arr[leftChild_ind] > arr[root_ind])
            root_ind = leftChild_ind;
        if (rightChild_ind < size && arr[rightChild_ind] > arr[root_ind])
            root_ind = rightChild_ind;
        if (root_ind == index)
            break;
        else {
            int temp = arr[root_ind];
            arr[root_ind] = arr[index];
            arr[index] = temp;
            index = root_ind;
        }
    }
	return arr; 
}
