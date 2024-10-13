#include<iostream>
using namespace std;

void factorial1(int n){
    long long res = 1;
    for(int i=1; i<n; i++){
        res = res * (i+1);
    }
    cout<<"Factorial of a number " << res;
}

// Recursive function

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;

    cout<<factorial(n);

    return 0;
}