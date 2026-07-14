//O(n) approach-Kadane's algorithm

#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int maxSubarray(int* arr,int n) {
    int max_sum = INT_MIN;
    int curr_sum = 0;
    for(int i=0;i<n;i++) {
        curr_sum+=arr[i];
        if(curr_sum<0) {
            curr_sum = 0;
        }
         max_sum = max(max_sum,curr_sum);

    }
           
    cout<<max_sum;

};

int main() {
    int arr[] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxSubarray(arr, n);
    return 0;
}