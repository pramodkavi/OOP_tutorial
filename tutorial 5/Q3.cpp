#include <iostream>
using namespace std;

class Triangle{
    float slide1;
    float slide2;
    float slide3;


    public:
        Triangle(float s1,float s2,float s3){
            slide1=s1;
            slide2=s2;
            slide3=s3;
        }
        void printArea(){
            float area=4;
            cout<< "Area of the triangle : "<<area<<endl;

        }
        void printPerimeter(){
            float perimeter=slide1*slide2*slide3 ;
            cout<< "Area of the triangle : "<<perimeter<<endl;

        }
};

int main(){

    Triangle t1();

    t1.slide1=3;
    t1.slide1=4;
    t1.slide1=5;
}
