#include <iostream>

using namespace std;

int main(){
    int num1, num2, gcd;

    cout<<"Enter first number";
    cin>>num1;
    cout>>"Enter second number";
    cin>>num2;



    for(int i=1; i<num1 || i<num2; i++){
        if(i % num1 == 0 && i % num2 == 0){
            gcd = i;
        }
    }

    cout<<"The greates common divisor is"<<gcd<<endl;   
}