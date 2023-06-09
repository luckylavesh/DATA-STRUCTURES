#include<iostream>
#include<cstring>
using namespace std;
bool chckpalindrome(string s){
    for(int i = 0; i<s.length()/2;i++){
        for(int j =s.length()-1;j>i;j--){
           if(s[i]!=s[j]){
            return false;
           }
           i++;
        }
    }
    return true;
    }
int main(){
    string s;
    cin>>s;
   cout<<chckpalindrome(s);

}