#include<iostream>
#include<cmath>

using namespace std;

class Circle{
    private:
        float py = 3.14;

    public:
        float area;
        float radius;


        float calculate(){
            area = pow(radius, 2) * py;
             return area;
        }
};


int main(){

    Circle c1 = Circle();
    c1.radius = 3;
    float circumference = c1.calculate();
    cout<<"The Area of circumference is : "<<circumference<<endl;


    return 0;
}
