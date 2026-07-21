#include <iostream>
#include<cstring>
using namespace std;

class User {
    int id;
    string password;
    public:
        string username;
        User(int id) {
            this->id=id;
        }
        string getPassword() {
            return password;
        }

        void setPassword(string password) {
            this->password = password;
        }
};

int main() {
    User u1(101);
    u1.username="saanya";
    cout<<u1.username<<endl;
    u1.setPassword("abcd");
    cout<< u1.getPassword() <<endl;

}