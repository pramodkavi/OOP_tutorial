#include <iostream>
using namespace std;


class Shape
{
protected:
    float width, height;

    public:
        Shape(float w,float h){
            width=w;
            height=h;
        }
        void set_data (float a, float b)
        {
            width = a; height = b;
        }
        void areaOfTriangle(){
            float triangle=(width * height)/2;
            cout<<"Area of triangle : "<<triangle<<endl;
        }
        void areaOfRectangle(){
            float rectangle= width * height;
            cout<<"Area of rectangle : "<<rectangle<<endl;
        }
};

int main(){

    Shape s1(0.0,0.0);

    s1.set_data(54.2,65.2);
    s1.areaOfTriangle();
    s1.areaOfRectangle();

}

