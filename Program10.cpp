#include<iostream>
using namespace std;

int countDigit(int n){
    int res = 0;
    while (n > 0)
    {
        n = n / 10;
        cout<<n<<" ";
        res ++;
    }
    return res;
}

int main(){
    int n;
    cin>>n;

    cout<< countDigit(n);
    return 0;
}