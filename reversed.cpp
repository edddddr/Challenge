#include<iostream>
#include<vector>

using namespace std;

int main(){

    int num_array[5] = {1,2,3,4,5};

    cout<<num_array[0];

    int reversed_array[5];
    int counter = 0;
    //cout<<"Input a number : ";
    for(int i = 4; i >= 0; i--){
         reversed_array[counter] = num_array[i];
         counter++;
    }

     for(int i = 0; i <= 4; i++){
              cout<<"The reversed number is : "<<reversed_array[i]<<endl;
             counter++;
        }


    return 0;
}
