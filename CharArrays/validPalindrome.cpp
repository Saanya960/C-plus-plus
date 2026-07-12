#include <iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char word[],int n) {
    int st = 0;
    int end =strlen(word)-1;
    while(st<=end) {
        if(word[st]!=word[end]) return false;//not a palindrome
        st++;
        end--;
    }
    return true;//is valid palindrome
}

int main() {
    char word[] = "madam";
    cout<<isPalindrome(word,strlen(word))<<endl;
}