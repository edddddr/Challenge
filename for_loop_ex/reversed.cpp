#include<iostream>
#include<vector>

using namespace std;

int main(){

    // My code 
    /*
    int num_array[5] = {1,2,3,4,5};

    cout<<num_array[0];

    int reversed_array[5];
    int counter = 0;
    cout<<"Input a number : ";
    for(int i =0; i <= 5; i++){
        cin>>num_array[]
    }
    for(int i = 4; i >= 0; i--){
         reversed_array[counter] = num_array[i];
         counter++;
    }

     for(int i = 0; i <= 4; i++){
              cout<<"The reversed number is : "<<reversed_array[i]<<endl;
             counter++;
        }

        */


    // Other's code
    int num, sum = 0, t,r;

    cout<<"Eneter a number : ";
    cin>>num;


    for(t=num; num != 0; num = num / 10){
        r = num % 10;
        sum = sum * 10 + r;
    }

    cout<<"The reversed number is : "<<sum;

    return 0;
}
