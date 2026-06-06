//Armstrong number
#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    int originalNum=num;
    int sum=0;
    while(num>0){
    int digit=num%10;num/=10;
    sum+=digit*digit*digit;
    }
    if(sum == originalNum) {
        cout<<"Armstrong number\n";
    } else {
        cout<<"Not an Armstrong number\n";
    }
    return 0;
}