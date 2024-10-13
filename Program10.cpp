#include<iostream>
using namespace std;

// Count number of Digit:-

int countDigit(int n){
    int result = 0;
    while(n>0){
        n = n / 10;
        result++;
    }
    return result;
}

int main(){
    int n;
    cin>>n;

    cout<<"Total number of digit: " << countDigit(n);
    return 0;
}