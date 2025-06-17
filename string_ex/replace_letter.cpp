#include<iostream>
#include<string>

using namespace std;

    string replace_letter_to_next(string str){

        int char_code;

        for(int i =0; i < str.length(); i++){
             char_code = int(str[i]);

             if(char_code == 122){
                str[i] = char(97);
             }else if(char_code == 90){
                str[i] = char(65);
             }else if(char_code >= 65 && char_code <= 90 || char_code >= 95 && char_code <= 122){
                str[i] = char(char_code + 1);
             }
        }

        return str;

    }

    int main(){

        string str;
        cout<<"Enter a string to see the results : ";
        cin>>str;
        cout<<"The result is : "<<replace_letter_to_next(str);



        return 0;
        }
