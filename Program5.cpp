#include<iostream>
using namespace std;

// Recursion function:-

void recursion(int n){
    if(n<=0){
        return;
    }
    for(int i=0; i<n; i++){
        cout<<i<<" sourabh"<<" ";
    }
    recursion(n/2);
    recursion(n/3);
}
int main(){
    int n;
    cin>>n;
    recursion(n);
    return 0;
}