#include<iostream>
#include<cstring>

using namespace std;

void remove(string str, int num){

    string edited_str = "";
    int leng = str.size() - 1 ;
    for(int i=0; i <= leng; i++){
      if(i != num){
       edited_str+=str[i];
      }

    }

    cout<<edited_str;
}

int main(){


remove("python", 2);

   return 0;
}
