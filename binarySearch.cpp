#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int tar){
    int st=0;
    int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        else if(arr[mid]>tar){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tar;
    cout<<"Enter searching element:";
    cin>>tar;
    int result = binarySearch(arr, n, tar);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";
    return 0;
}

   
