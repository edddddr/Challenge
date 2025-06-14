// Try the code with  Sample Output:
        // Input the starting number of the A.P. series: 1
        // Input the number of items for the A.P. series: 8
        // Input the common difference of A.P. series: 5
        // The Sum of the A.P. series are :
        // 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148
#include<iostream>

    using namespace std;

    int main(){


        int temp,start_with,num_item,with_diff,AP_sum =0;

        cout<<"Input the number of items for the A.P. series : ";
        cin>>start_with;
        cout<<"Input the number of items for the A.P. series : ";
        cin>>num_item;
        cout<<"Input the common difference of A.P. series : ";
        cin>>with_diff;
        


        for(temp = 1; temp < num_item + 1; temp++){
            AP_sum += start_with;
            cout<<"The common difference is : "<<start_with<<endl;
            start_with += with_diff;

        }

        cout<<"A.p Sum is : "<<AP_sum;



        return 0;
    }

