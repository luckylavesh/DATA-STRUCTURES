#include<iostream>
using namespace std;
int srt(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    srt(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}