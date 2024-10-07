#include <iostream>
using namespace std;

// Sum of all N natural numbers:-

// Time taken = O(1);
/*
int fun1(int n)
{
    return n * (n + 1) / 2;
}
*/

// Time taken = O(n);
/*
int fun2(int n){
    int sum = 0;
    for(int i=0; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}
*/

// Time taken = O(n2);

int fun3(int n){
    int sum=0; 
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            sum++;
        }
    }
    return sum;
}

int main()
{
    int n = 7;
    // int sum = fun1(n);
    // int sum = fun2(n);
    int sum = fun3(n);
    cout<<sum;

    return 0;
}
