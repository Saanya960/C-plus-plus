//O(n^2) approach

#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int maxSubarray(int* arr,int n) {
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++) {
            int sum=0;
        for(int j=i;j<n;j++) {
           sum+=arr[j];
            max_sum = max(max_sum,sum);
        }
        cout<<endl;
    }
    cout<<max_sum;

}

int main() {
    int arr[] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxSubarray(arr, n);
    return 0;
}