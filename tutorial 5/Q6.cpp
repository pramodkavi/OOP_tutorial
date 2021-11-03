#include <iostream>
using namespace std;

class Employee{
    public:
        string name;
        int year;
        float salary;
        string address;

    void getDetails(){
        cout<<"\t "<<name<<"\t\t "<<year<<"\t\t "<<address<<endl;
    }
};

int main(){

    int num;
    cout<<"Enter the number of employee : ";
    cin>>num;
    Employee empArray[num];

    for(int i=0;i<num;i++){
        cout<<"Enter the employee "<<i+1<<" name : ";
        cin>>empArray[i].name;

        cout<<"Enter the employee "<<i+1<<" year of joining : ";
        cin>>empArray[i].year;

        cout<<"Enter the employee "<<i+1<<" salary : ";
        cin>>empArray[i].salary;

        cout<<"Enter the employee "<<i+1<<" address : ";
        cin>>empArray[i].address;

        cout<<endl;
    }

    cout<<"\t\t Details of the Employees \n"<<endl;

    cout<<"\t Name"<<"\t Year of joining"<<"\t Address\n"<<endl;

    for(int i=0;i<num;i++){
       empArray[i].getDetails();
    }
}
