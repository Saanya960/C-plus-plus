#include <iostream>

using namespace std;

int binToDec(int binNum) {
    int num = binNum;
    int decNum = 0;
    int pow = 1;
    while(num != 0){
    int digit = num%10;num/=10;
    if(digit == 1) {
        decNum+=digit*pow;
    }
    pow*=2;

}
return decNum; 
}

int main() {
    cout<<binToDec(101);
    return 0;
}