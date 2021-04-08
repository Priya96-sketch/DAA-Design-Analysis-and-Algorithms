//Selection Sort//
// Working Process -> Two loops are used here:
//                  1st -> i loop - From 0 to (n-1)
//                  2nd -> j loop - From i+1 to n
// The selection sort algorithm sorts an array by repeatedly finding the minimum element from unsorted part and putting it at the beginning.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;  //Taking Input

    int arr[n];
    for(int i=0;i<n;i++)    //Loop for taking array elements
    {
        cin>>arr[i];
    }
    

//Main algorithm//
    for(int i=0;i<n-1;i++)
    {
        //Finding the minimum element in the unsorted array
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
            {
                //Swapping the minimum element with the first element 
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    

    //Printing the array//
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
