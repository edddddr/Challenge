#include<iostream>

using namespace std;

int absolute_Difference(int n){
    // The difference is with 51
    int difference ;

    if(n > 51){
        difference = n - 51;
        return difference = difference  * 3;
    }else{
        difference = 51 - n;
        return difference;
    }


    return 0;
}


int main(){

    cout<<absolute_Difference(53)<<endl;
    cout<<absolute_Difference(30)<<endl;
    cout<<absolute_Difference(51)<<endl;

    return 0;
}
