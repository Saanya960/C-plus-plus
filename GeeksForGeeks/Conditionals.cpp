#include <iostream>
#include <string>
using namespace std;


int main() {
    int choice;
    cout<<"Which approach do you want-if-else(1), switch-case(2), or ternary(3)?"<<endl;
    cin>>choice;

    if(choice == 1) {
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

    else if(choice == 2) {

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
    else {
    //ternary form of x
    int x;
    cout<<"Enter value of x";
    cin>>x;
    x>0?cout<<"x is positive"<<"\n":x<0?cout<<"x is negative"<<"\n":cout<<"x is zero"<<"\n";
    }
    cout<<"End of program"<<"\n";
    return 0;

}