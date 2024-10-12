#include<iostream>
using namespace std;

void recursion(int n){
    if(n<=0){
        return;
    }
    cout<<"Sourabh"<<endl;
    recursion(n/2);
    recursion(n/2);
}
int main(){
    int n;
    cin>>n;
    recursion(n);
    return 0;
}