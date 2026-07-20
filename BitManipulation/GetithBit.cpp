#include <iostream>
using namespace std;

int getBit(int n,int i) {
    1<<i;
    if(!(n & (1<<i)) ) {
        cout<<"your ith bit was "<<0<<endl;
       
    } else {
        cout<<"your ith bit was "<<1<<endl;

    }
    


}

int main() {

   getBit(7,1);
   return 0;
}