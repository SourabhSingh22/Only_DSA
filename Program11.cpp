#include<iostream>
using namespace std;

// Check Palindrome
int palindrome(int n){
    int rev = 0;
    int temp = n;

    while(temp != 0){
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter the value of n:- ";
    cin>>n;

    int rev = palindrome(n);

    if(rev == n){
        cout<<"This is palindrome!";
    }else{
        cout<<"This is not palindrom!";
    }
    return 0;
}