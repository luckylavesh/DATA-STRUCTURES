#include<iostream>
using namespace std;
int rot(int arr[],int n,int key){
    int temp[n];
    int count = 0;
    for(int i = key; i<n; i++){
        temp[count] = arr[i];
        count++;
    }
    for(int j = 0; j<key;j++){
        temp[count] = arr[j];
        count++;
    }
    for(int i = 0; i<n; i++){
        arr[i] = temp[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    rot(arr,n,key);
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}