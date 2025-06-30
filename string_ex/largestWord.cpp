#include<iostream>

using namespace std;

string largestWord(string setence){

    int L_word = 0;
    int count = 0;
    string word = 'w';

    for(int i=0; i<setence.length(); i++){
        char_code = char(str[0])
        while(char_code != " "){
            count++;
            word+=char_code;
        }
        if(count >  L_word){
            L_word = count;
           string word = word; 
        }
    
        count = 0;
        Lword = 'w';
        }
        

        return word;

}


int main(){

    cout<<"The largerst word in the stentence is : "<<largestWord('C++ is a computer language')<<endl;

    return 0;
}