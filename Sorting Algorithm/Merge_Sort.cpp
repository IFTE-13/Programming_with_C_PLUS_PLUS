#include<iostream>
using namespace std;

#define lim 200
int temp[lim];

print(int arr[], int n){
for(int i=0; i<n; i++){
    cout<<arr[i]<<' ';
}

}

void Merge(int arr[], int l, int middle, int r)
{
    int i, j, k=0;
    i=l;
    j=middle+1;
    while(i<= middle && j<=r){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=middle){
        temp[k++]=arr[i++];
    }
    while(j<=r){
        temp[k++]=arr[j++];
    }
    for(i=l, j=0; i<=r; i++, j++){
        arr[i]=temp[j];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l>=r){
        return;
    }
    else{
        int middle;
        middle = (l+r)/2;

        mergeSort(arr, l, middle);
        mergeSort(arr, middle+1, r);

        Merge(arr, l, middle, r);
    }
}
int main()
{
     int n = 5;
     int arr[n] = {2, 3, 9, 7, 1};
     /*for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }*/
     mergeSort(arr, 0, n-1);
     cout<<"The sorted Array is ";
     print(arr, n);
}
