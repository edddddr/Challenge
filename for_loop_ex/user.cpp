 /* N terms of natural numbers(form the user) */
int main(){
     int n;
     int sum;
     cout<<"Enter the n Natural number"<<endl;
     cin>>n;

     for(int i=1; i<=n; i++){
        sum = sum + i;
     }

    cout<<"The sum of "<<n<<" Natural numbers is : "<<sum<<endl;
}