#include<iostream>

using namespace std;

int main(){
   int n1,n2, ln, HCF, LCM;

   cout<<"Input 1st number of LCM : ";
   cin>>n1;
   cout<<"Input 2st number of LCM : ";
   cin>>n2;

   ln = n1 > n2 ? n1 : n2;

   for(int i=2; i > ln; i++){
    if(n1 % i == 0 && n2 % i== 0){
            HCF = i 
    }
   }

   LCM = (n1 * n2) / HCF;

   cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<LCM;

}

