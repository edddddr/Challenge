#include<iostream>

using namespace std;

int main(){

int count = 0;
int n =0;
int numbers[100];
int t=0;
int temp=0;
int prev = 0
for(int i=2; i<50; i++){
    for(int j=1; j<=i; j++){
        if(i%j == 0){
            prev = temp
           count++;
           temp = j;
        }
    }

}
cout<<"The prime numbers between 1 and 100 are:";
while(numbers[n]){
cout<<numbers[n++]<<' ';
}
}
