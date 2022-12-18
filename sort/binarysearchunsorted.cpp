

#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
bool compare(const pair<int, int>&i, const pair<int, int>&j) 
{ 
    return i.second < j.second; 
} 
// This program performs a binary search through an array, must be sorted to work
int binarySearch(int size, int value) 
{   
    
    int first = 0,         // First array element       
    last = size - 1,       // Last array element       
    middle,                // Mid point of search       
    position = -1;         // Position of search value   
    bool found = false;        // Flag   
    while (!found && first <= last) 
    {      
        middle = (first + last) / 2;     // Calculate mid point      
        if (v[middle].second == value)      // If value is found at mid      
    	{         
                found = true;         
                position = middle;      
        }      
        else if (v[middle].second > value)  // If value is in lower half         
            last = middle - 1;      
        else         
            first = middle + 1;          // If value is in upper half   
    }   
    return v[position].first;
}
int main ()
{
    int n;
    cin>>n;
    v.resize(n);
    

    int x;
    const int size = n; // size initialization
    int array[size]; // declare array of size 10
    for(int i = 0;i<n;i++){
        cin>>x;
        array[i] = x;
        v[i].first = i;
        v[i].second = x;
    }
    sort(v.begin(),v.end(),compare); 

    int value; // declare value to be searched for
    int result; // declare variable that will be returned after binary search

    cin >> value;
    result = binarySearch(size, value);
    cout<<result;
  
    return 0;
}
