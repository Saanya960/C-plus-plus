#include <iostream>
using namespace std;

int clearIBits(int num,int i) {  
    int bitmask =  ~0<<i;
    return num & bitmask;
}

void countIBits(int num1) {
    int count=0;
    while(num1 > 0) {
        int lastDigit = num1 & 1;
        count+=lastDigit;
        num1>>=1;
    }
    cout<<count<<endl;
}
int main() {
    cout<<clearIBits(15,2)<<endl;
    countIBits(10);
}