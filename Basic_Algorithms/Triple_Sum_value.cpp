#include<iostream>

using namespace std;

int num1 = 1;
int num2 = 2;
int num3 = 3;
int sum = 0;


int triple_sum(int par1, int par2){
    sum = par1 + par2;
    if(par1 != par2){
        return sum;
    }else{
        return sum + sum + sum;
    }
}

int main(){

    cout<<triple_sum(num1, num2)<<endl;
    cout<<triple_sum(num3, num2)<<endl;
    cout<<triple_sum(num2, num2)<<endl;

    return 0;
}