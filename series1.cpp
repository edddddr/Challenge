#include<iostream>

using namespace std;

int main(){

double enteredNum = 5;
double sum = 0;

    for(int i=1; i<enteredNum; i++){
        sum += 1 / (i*i);
    }

    cout<<"The result is : "<<endl;

    return 0;
}