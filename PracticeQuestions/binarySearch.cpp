#include <iostream>

using namespace std;

int searchKey( int*arr, int n, int key) {
    int st = 0;
    int end = n-1;
    int mid = (st+ end)/2;
    while(st<=end) {
        if(key == mid) {
            return mid;
        } 
        else if(key > mid) {
            st+=mid;
        } else {
            end-=mid;
        }
    } return -1;
}

int main() {
    int arr[] = {2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    cout<<searchKey( arr, n, 12);
}