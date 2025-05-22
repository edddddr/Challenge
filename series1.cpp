#include<iostream>
#include<cmath>

using namespace std;

int main(){

double enteredNum = 5;
double sum = 0;

    for(int i=1; i<enteredNum; i++){
        sum += 1 / pow(i, i);
    }

    cout<<"The result is : "<<sum<<endl;

    return 0;
}
