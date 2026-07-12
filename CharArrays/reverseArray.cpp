#include <iostream>
#include<cstring>
using namespace std;

string reverse(char ch[],int n) {
    int st=0;
    int end=n-1;
    while(st<end) {
        swap(ch[st],ch[end]);
        st++;
        end--;
    }
    return ch;
}

int main() {
    char ch[] = "apna college";
    int n=strlen(ch);
    for(int i=sizeof(ch)-1;i>=0;i--) {
        cout<<ch[i]<<" ";
    }
    cout<<endl; //way1
   cout<< reverse(ch,n)<<endl;//way2
    return 0;
}