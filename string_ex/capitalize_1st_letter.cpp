// Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises

#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string capitalize(string str){
            int char_code

            char_code = str[0]
            str[0] = char(char_code - 32)
            for(int i =1; i<str.length(); i++){
                char_code = str[0]
                if(str[i] == " "){
                    char_code = str[i+1] 
                    str[i]  = char(char_code - 32)
                }
            }



    }


    return 0;
}