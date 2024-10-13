#include<iostream>
using namespace std;

// Sum of n fibonacci number:-

int fibo(int n){
    int f[n+1];

    int a=0;
    int b = 1;
    int c;
    for(int i=2; i<=n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c;
}

int main(){
    int n;
    cin>>n;

    cout<<"Sum of n fibonacci number:- " << fibo(n);
    return 0;
}