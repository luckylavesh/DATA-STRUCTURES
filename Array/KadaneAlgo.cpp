#include<iostream>
using namespace std;
int kadane(int arr[],int n){
    int currentsum = 0;
    int maxsum = -1e5;
    for(int i = 0; i<n; i++){
        if(currentsum<0){
            currentsum = 0;
        } 
        currentsum += arr[i];
        maxsum = max(currentsum,maxsum);
    }
    return maxsum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<kadane(arr,n);
}