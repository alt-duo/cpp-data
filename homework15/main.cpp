#include <iostream>
using namespace std;
void bubbleSort(int a[], int n){
    int t;
    for(int i = 0; i < n; i++){
      for(int j = 1; j < n; j++){
        if(a[j-1] < a[j]){
          t = a[j-1];
          a[j-1]=a[j];
          a[j]=t;
        }
      }
    }
}
void selectionSort(int arr[], int n)
{
    int i,j,max_index;
    for(i=0;i<n;i++)
    {
        max_index = i;
        for(j=i+1;j<n;j++)
            if (arr[j] > arr[max_index])
                max_index = j;
        swap(arr[i],arr[max_index]);
    }
}
int main() {
    int length;
    cin>>length;
    int temp;
    int arr1[length];  
    int arr2[length];
    for(int i=0;i<length;i++){
        cin>>temp;
        arr1[i] = temp;
        arr2[i] = temp;
    }
    bubbleSort(arr1, length);
    selectionSort(arr2, length);
    for(int i = 0;i<length;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i = 0;i<length;i++){
        cout<<arr2[i]<<" ";
    }

    return 0;
}