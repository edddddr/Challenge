#include<iostream>


using namespace std;


int main(){

    for(int i=1; i <= 5; i++ ){
        for(int j=1; j <=i; j++){
            cout<<"#";
        }
        cout<<endl;
    }


    for(int i=1; i <= 5; i++ ){
        for(int j=1; j <=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    
    for(int i=1; i <= 5; i++ ){
        for(int j=1; j <=i; j++){
            cout<<j;
        }
        cout<<endl;
    }


    for(int i=1; i <= 5; i++ ){
        for(int j=5; j > i; j--){
            cout<<" ";
        }
         for(int y =1; y<=i; y++){
            cout<<y;
            cout<<" ";
         }
        cout<<endl;
    }

    // The out put of the above code is :  
    // 1
    // 1 2
//    1 2 3
//   1 2 3 4
// 1 2 3 4 5

    

    return 0;

}