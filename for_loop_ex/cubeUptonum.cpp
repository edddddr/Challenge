#include<iostream>
#include<cmath>

using namespace std;


int main(){

 int n;
 cout<<"Enter a number : ";
 cin>>n;
 int cub=0;

 for(int i =1; i<=n; i++){
    cub = pow(i, 3);
    cout<<"Number is : "<<i<<" the cube of "<<i<<" is "<<cub<<endl;
 }

    return 0;
}