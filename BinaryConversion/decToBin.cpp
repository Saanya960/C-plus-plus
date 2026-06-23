#include <iostream>
using namespace std;


int decToBin(int dec) {
    int bin = 0;
    int pow=1; //10^0,10^1,10^2..
    while(dec>0){
    int rem = dec%2;dec/=2;
    bin+=rem*pow;
    pow*=10;
}
    return bin;
}

int main() {
    cout<<decToBin(5)<<endl;
    return 0;
}