#include<iostream>

using namespace std;

int is_between(int num){

    if(abs(num - 100) || abs(num - 200) <=10){
        return true;
    }else{
        return false;
    }
}


int main(){

    cout<<is_between(103)<<endl;
    cout<<is_between(90)<<endl;
    cout<<is_between(89)<<endl;

    return 0;
}
