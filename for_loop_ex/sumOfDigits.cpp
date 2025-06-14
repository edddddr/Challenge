#include<iostream>
#include<vector>


using namespace std;

int main(){

    int num1, num2, r, sum=0;

    cout<<"Enter a number";
    cin>>num1;

    num2 = num1;

    while(num1 > 0){
        r  = num1 % 10;
        num1 = num1 / 10;
        sum += r;
    }

    cout<<"The actual digit is "<<num2<<"and the result is : "<<num1;

    return 0;
}