#include<iostream>

using namespace std;

int main(){

int count = 0;
int n =0;
int numbers[100];
int t=0;
int temp=0;
for(int i=2; i<100; i++){
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
cout<<"The prime numbers between 1 and 100 are:";
while(numbers[n]){
cout<<numbers[n++]<<' ';
}
}
