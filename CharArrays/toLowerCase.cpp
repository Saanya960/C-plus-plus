#include <iostream>
#include <cstring>
using namespace std;

void toLowerCase(char word[],int n) {
    for(int i=0;i<n;i++) {
        if(word[i]>='a' && word[i]<='z') {
            continue;
        } else {
            word[i]= word[i]-'A'+'a';
        }
    }
     cout<<word<<endl;
}


int main() {
    char word[] = "SaANyA";
    toLowerCase(word,strlen(word));
}