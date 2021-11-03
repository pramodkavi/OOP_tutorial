#include <iostream>
using namespace std;

class Student{
    protected:
        string name;
        int roll_no;

    public :
        Student(string n,int r){
            name=n;
            roll_no=r;
        }
        void getProperty(){
            cout<<name<<" "<<roll_no<<endl;
        }

};

int main(){

    Student s1("John",2);
    s1.getProperty();
}
