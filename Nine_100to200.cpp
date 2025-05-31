#include<iostream>

using namemspace std;

int main(){
    int sum = 0;
    for(int i=100; i<=200; i++){
        if(i%9 == 0){
            sum+=i
        }
    }
    cout<<"Numbers between 100 and 200, divisible by 9: is"<<endl<<sum;
}