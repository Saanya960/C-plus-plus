//Two Pointer Approach

#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;
vector<int> pairSum(vector<int> arr, int target) {
        int start=0;
        int end=arr.size() - 1;
        int sum=0;
        
        while(start<end) {
            sum = arr[start]+arr[end];
            if(sum == target) {
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            } 
            else if(sum>target) {
                end--;
            } else {
                start++;
            }
        }
}

int main() {
    vector<int> vec = {2,7,11,15};
    int target = 9;
    pairSum(vec,target);
    cout<<ans[0]<<","<<ans[1];
}