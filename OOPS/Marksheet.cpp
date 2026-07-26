#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Student {
    protected :
        string name;
        string reg_no;
    public :
         void setData() {
            cout<<"Enter your name ";
            getline(cin >> ws,name);
            cout<<"Enter your registeration Number ";
            cin>>reg_no;
         }
        void displayData() {
            cout<<"Name : "<<name<<endl;
             cout<<"Reg. No. : "<<reg_no<<endl;
        }
};

class Result {
    public:
        virtual void calculateResult() = 0;
};

class Marksheet : public Student, public Result {
    int maths;
    int cplusplus;
    int dld;
    int dbms;
    int english;
    
    int total;
    float percentage;
    char grade;
    string result;

    public :
        void setMarks() {
            cout<<"Enter marks of maths"<<endl;
            cin>>maths;
            cout<<"Enter marks of c++"<<endl;
            cin>>cplusplus;
            cout<<"Enter marks of DLD"<<endl;
            cin>>dld;
            cout<<"Enter marks of dbms"<<endl;
            cin>>dbms;
            cout<<"Enter marks of english"<<endl;
            cin>>english;
         }
        void calculateResult() {
            total = maths + cplusplus + dld + dbms + english;
            percentage = total / 5.0;
                if(percentage >= 40) {
                    result = "PASS"; }
                else {
                    result = "FAIL";
                        }
                if (percentage >= 90)
                    grade = 'A';
                else if (percentage >= 75)
                    grade = 'B';
                else if (percentage >= 60)
                    grade = 'C';
                else if (percentage >= 40)
                    grade = 'D';
                else
                    grade = 'F';
        };
        void displayMarksheet() {
            cout << "\n=========================================\n";
            cout << "          VIT BHOPAL UNIVERSITY\n";
            cout << "               MARKSHEET\n";
            cout << "=========================================\n";

            cout << "Name      : " << name << endl;
            cout << "Reg. No.  : " << reg_no << endl;

            cout << "-----------------------------------------\n";
            cout << left << setw(20) << "Subject" << "Marks" << endl;
            cout << "-----------------------------------------\n";

            cout << left << setw(20) << "Maths"   << maths << endl;
            cout << left << setw(20) << "C++"     << cplusplus << endl;
            cout << left << setw(20) << "DLD"     << dld << endl;
            cout << left << setw(20) << "DBMS"    << dbms << endl;
            cout << left << setw(20) << "English" << english << endl;

            cout << "-----------------------------------------\n";
            cout << "Result      : " << result << endl;
            cout << "Total       : " << total << endl;
            cout << "Percentage  : " << percentage << "%" << endl;
            cout << "Grade       : " << grade << endl;
            cout << "=========================================\n";
        };

};

int main() {
    Marksheet m1;
    m1.setData();
    m1.setMarks();

    m1.calculateResult();

    m1.displayMarksheet();
};