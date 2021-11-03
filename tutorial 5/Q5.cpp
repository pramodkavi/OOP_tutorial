#include <iostream>
using namespace std;

class Area{
    float breadth;
    float length;

    public:
        void setDim(float b,float l){
            breadth=b;
            length=l;
        }
        float getArea(){
            float area=(length*breadth)/2;
            return area;
        }

};

int main(){
    float breadth;
    float length;

    cout<<"Enter the breadth of the triangle : ";
    cin>>breadth;

    cout<<"Enter the length of the triangle : ";
    cin>>length;

    Area a1;

    a1.setDim(breadth,length);
    cout<<"Area of the Triangle : "<<a1.getArea();
}
