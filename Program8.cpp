#include<iostream>
using namespace std;

// Sum of all natural number:-

int funSum(int n){
    if(n<=0){
        return 0;
    }
    return n + funSum(n-1);
}

int main(){
    int n;
    cin>>n;

    cout<<"Sum of n natural numbers:- "<< funSum(n);

    return 0;
}