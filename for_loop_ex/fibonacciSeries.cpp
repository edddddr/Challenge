#include<iostream>

using namespace std;


int main(){

    int result, term, prev;
    result = term = prev = 0;
    int next = 1;

    cout<<"Input the numbers of terms to display :  ";
    cin>>term;
    cout<<"Here is the Fibonacci series output "<<term<<" terms: "<<endl;
    for(int i=1; i<term; i++){
        result = prev + next;
        prev = next;
        next = result;
        cout<<result;
       
    }
}