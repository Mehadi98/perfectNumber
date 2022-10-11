#include<iostream>
using namespace std;

int main(){
    //======<<<<<<This is for Perfect Number Checker >>>>==============
    
    
    // int number,sum;
    // sum=0;
    // cout<<"Enter Your Number :";
    // cin>>number;
    // for(int i=1;i<number;i++){
    //     if(number%i==0){
    //         sum+=i;
    //     }
    // }
    // if (sum==number)
    // {
    //     cout<<number<<" is a Perfect Number";
    // }
    // else{
    //     cout<<number<<" is not a Perfect Number";
    // }
    
    //======<<<<<<This is for Perfect Number Generator >>>>==============
    
    int number,sum;
    sum=0;
    cout<<"Enter Your Number :";
    cin>>number;

    for (int i=1;i<=number;i++){
        sum=0;
        for(int j=1;j<i;j++){
            if (i%j==0)
            {
                sum+=j;
            }
        }
        if (sum==i)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}
