#include <iostream>
using namespace std;

int setithBit(int n,int i) {
       int bitmask= 1<<i;
        int ans= n | bitmask;
        return ans;
}

int main() {
    cout<<setithBit(5,1)<<endl;
}