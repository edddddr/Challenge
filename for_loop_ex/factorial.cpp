#include <iostream>

using namespace std;

int main(){
    int n,i, fac=1;
    cout<<"Enter a number to find the factorial: "<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        fac*= i;
    }
    cout<<"The factorial of the given number is: "<<fac<<endl;
}
