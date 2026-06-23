#include <iostream>

using namespace std;

int copyArr(int *arr, int n) {
    for(int i=n-1;i>=0;i--) {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main() {
    int arr[] = {5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);

    copyArr(arr , n);
}