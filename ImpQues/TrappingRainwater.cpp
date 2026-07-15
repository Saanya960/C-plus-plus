#include <iostream>
#include <climits>
using namespace std;

int trapRainwater(int* arr,int n) {
        int leftMax[10000];
        int rightMax[10000];
         leftMax[0]=0;
        for(int i =0;i<n;i++) {
            leftMax[i]= max(leftMax[i-1],arr[i]);
        }
        rightMax[n]=0;
        for(int i =n-1;i>=0;i--) {
            rightMax[i]= max(rightMax[i+1],arr[i]);
        }
        int waterTrapped=0;
        for(int i =0;i<n;i++) {
            
           waterTrapped+= min(leftMax[i],rightMax[i]) - arr[i];
        }
        cout<<waterTrapped<<endl;

}

int main() {
    int arr[] = {4,2,0,6,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    trapRainwater(arr,n);
    return 0;
}