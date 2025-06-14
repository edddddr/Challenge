#include<iostream>

using namespace std;

int main(){

int count = 0;
int n;
cout<<"Input a number to check prime or not"<<endl;
cin>>n;
for(int i=2; i<n; i++){
    if(n%i == 0){
        count++;
     }
}
if(count == 0){
        if(n%1 == 0 && n%n == 0){
    cout<<"The entered number is a prime number."<<endl;
}
}else{
    cout<<"The entered number is not a prime number."<<endl;
}
}

