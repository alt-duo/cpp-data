#include <bits/stdc++.h>
using namespace std;

// This program performs a binary search through an array, must be sorted to work
int binarySearch(int array[], int size, int value) 
{   
    int first = 0,         // First array element       
    last = size - 1,       // Last array element       
    middle,                // Mid point of search       
    position = -1;         // Position of search value   
    bool found = false;        // Flag   
    while (!found && first <= last) 
    {      
        middle = (first + last) / 2;     // Calculate mid point      
        if (array[middle] == value)      // If value is found at mid      
    	{         
                found = true;         
                position = middle;      
        }      
        else if (array[middle] > value)  // If value is in lower half         
            last = middle - 1;      
        else         
            first = middle + 1;          // If value is in upper half   
    }   
    return position;
}
int main ()
{
    int n;
    cin>>n;
    int x;
    const int size = n; // size initialization
    int array[size]; // declare array of size 10
    for(int i = 0;i<n;i++){
        cin>>x;
        array[i] = x;
    }
    int array1[size];
    for(int i = 0;i<n;i++){
        array1[i] = array[i];
        
    }
    sort(array1, array1 + n); 

    int value; // declare value to be searched for
    int result; // declare variable that will be returned after binary search

    cin >> value;
    result = binarySearch(array1, size, value);
    for(int i = 0;i<n;i++){
        if(array1[result]==array[i]){
            cout<<i<<" ";
        }
    }
  
    return 0;
}

