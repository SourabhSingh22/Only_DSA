#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n=5;
    int arr[] = {1,3,5,6,7};
    int key = 5;

    int result = linearSearch(arr, n , key);
    cout<<"key is present at index "<<result;
    return 0;
}