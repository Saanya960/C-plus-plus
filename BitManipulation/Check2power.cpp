#include <iostream>
using namespace std;

void checkPower(int num) {
        if(!(num & (num-1))) {
            cout<<"power of 2 ";
        } else {
            cout<<"not a power of 2 ";
        }
}

int main() {
    checkPower(2);
    checkPower(8);
    checkPower(7);
    checkPower(1);
    return 0;
}