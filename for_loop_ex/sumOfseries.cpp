    #include<iostream>

    using namespace std;

    int main(){


        int i,n;
        int sum=0;

        cout<<"Enter a number to finde series num : "
        cin>>n;

        for(i=1; i<=n; i++){
            sum+=i*i;

        }

        cout<<"The sum of the series number of "<<n<<" is"<<sum<<endl;
        return 0;
    }