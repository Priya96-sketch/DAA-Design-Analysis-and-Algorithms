//Insertion sort//
// Role of this Sorting Algorithm -> Values from the unsorted part are picked and placed at the correct position in the sorted part.//

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    //Takes the User Input
    cin>>n;   

    //Here defining an array of size n//
    int arr[n];   
    
    //Loop for taking the array elements
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


//Algorithm//
    // The counting starts from the 2nd element in the array list.
    for(int i=1;i<n;i++)
    {
        //Now,comparing the current element (key) to its predecessor elements and moving the greater elements one position forward.
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=current;
    }

    //priting 
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



//TIME COMPLEXITY


// For the Average and Worst Case Scenario -> O(n**2) . REASON -> Time is taken arranging or sorting the whole array.
// For the Best Case Scenario -> O(n) . REASON -> In the Best Case Scenario, the array is already sorted and we just need to find out the element


//SPACE COMPLEXITY
// O(1) -> For the Worst Case Scenario
