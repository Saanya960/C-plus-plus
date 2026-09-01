#include <iostream>
#include <string>
using namespace std;


int main() {
    bool isIfElse = true;
    cout<<"Do you want to check if-else conditions?-1/0"<<endl;
    cin>>isIfElse;

    if(isIfElse) {

    int x;
    cout<<"Enter value of x";
    cin>>x;

    if(x>0) {
        cout<<"x is positive"<<endl; }
    else if(x<0) {
        cout<<"x is negative"<<endl; }
    else {
        cout<<"x is zero"<<endl; }
     }

    else {

//switch
char grade = 'B';

switch(grade) {
    case 'A': 
        cout<<"Keep it up"<<endl;
        break;
    case 'B':
        cout<<"Passed"<<endl;
        break;
    case 'C':
        cout<<"Needs Improvement"<<endl;
        break;
    default:
        cout<<"Invalid Grade"<<endl;
        break;
}
     }
    cout<<"End of program"<<"\n";
    return 0;

}