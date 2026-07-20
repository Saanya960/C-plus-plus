#include <iostream>
using namespace std;

bool oddOrEven(int n) {
    if((n & 1)==0) {
        cout<<"even"<<endl;
        return true;
    } else {
        cout<<"odd"<<endl;
        return false;
    }
}


int main() {
    cout<<oddOrEven(48)<<endl;
}