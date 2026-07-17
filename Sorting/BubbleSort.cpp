#include <iostream>
using namespace std;


int bubbleSort(int* arr,int n) {
    bool isSwap = false;
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
            swap(arr[j],arr[j+1]); 
            isSwap = true;}
        }
    }
    if(!isSwap) {
        return 0;
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[5] = {5,3,2,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
}