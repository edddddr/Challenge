#include<iostream>

using namespace std;

int main(){
    int count = 0;
    int n =0;
    int numbers[100];
    int t=0;
    int temp=0;
    int x=0;


cout<<"Input a number to find the last prime number occurs before the number: ";
cin>>x;


for(int i=2; i<x; i++){
    for(int j=1; j<=i; j++){
        if(i%j == 0){
           count++;
           temp = j;
        }
    }
    if(count == 2){
        numbers[t] = temp;
        t++;
     }
     count=0;

}

