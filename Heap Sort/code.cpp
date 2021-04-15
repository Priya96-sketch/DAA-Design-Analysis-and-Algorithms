//HEAP SORT
//In this Algorithm we first build the heap using the given elements. We create
// a Max heap to sort the elements in ascending order. Once the heap is created
// we swap the root node with the last node and delete the last node from the heap.

#include <iostream>
using namespace std;
  
//Function to create the Max Heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Initializing largest as root
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
  
    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;
  
    // If right child is larger than largest 
    if (r < n && arr[r] > arr[largest])
        largest = r;
  
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
  
        
        heapify(arr, n, largest);
    }
}
  
// main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build heap )
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
  
    
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
  
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
  
// Printing
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
  

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
  
    cout << "Sorted array is \n";
    printArray(arr, n);
}
