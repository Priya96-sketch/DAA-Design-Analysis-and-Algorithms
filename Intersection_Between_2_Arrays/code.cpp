#include <bits/stdc++.h>
using namespace std;
  
//This function will print the common elements , that is the Intersection of two arrays of arr1[] and arr2[]
//m is the number of elements in arr1[]
//n is the number of elements in arr2[] 
void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) 
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}
  
//Driver Code
int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
  
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
  
    //Calling
    printIntersection(arr1, arr2, m, n);
  
    return 0;
}
//TIME COMPLEXITY -> O(m + n)
