#include<iostream>

using namespace std;

int checker(int n1, int n2){

    // Checking if one of given numbers is equale to 30 or the sum of the given numbers
    int sum = n1 + n2;
    if(n1 == 30 || n2 == 30 || sum == 30){
            return true;
        }else{
            return false;
            };
}


int main(){

   cout<<checker(30, 0)<<endl;
   cout<<checker(25, 5)<<endl;
   cout<<checker(20, 30)<<endl;


    return 0;
}
