#include<iostream>

using namespace std;



string append(string str){

   char firt_char = str[0];
   char second_char = str[1];
   char third_char = str[2];

   if(int(firt_char) != 105 and int(second_char) != 102){
    if(int(third_char) != 32){
         cout<<"if"<<" "<<str;
    }
   }else{
    cout<<str;
   }
}


int main(){
    
    append("else");


   return 0;
}
