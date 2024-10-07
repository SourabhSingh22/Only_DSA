#include<iostream>
using namespace std;

void isPrime(int n){
    if(n == 1){
        cout<<"it is not prime";
    }else if(n==2 || n == 3){
        cout<<"It is prime";
    }else if(n % 2 ==0 || n % 3 ==0){
        cout<<"It is not prime";
    }else{
        cout<<"It is prime number!";
    }
}

int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;

    isPrime(n);

    return 0;
}