#include <iostream>

using namespace std;


int copyArr(int *arr , int n) {
    int start = 0;
    int end = n-1;
    while(start < end) {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main() {
    int arr[] ={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    copyArr(arr, n);
}