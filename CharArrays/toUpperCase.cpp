#include <iostream>
#include<cstring>
using namespace std;

void toUpper(char work[],int n) {
    for(int i=0;i<n;i++) {
        char ch = work[i];
        if(ch>='a' && ch<='z') {
       work[i]= ch - 'a' + 'A';
    } else{
        continue;
    }};
};

int main() {
    char work[] = "code";
    toUpper(work, strlen(work));

    cout<<work<<endl;
    return 0;
}