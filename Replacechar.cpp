#include<iostream>
#include<cstring>
using namespace std;
string chckpalindrome(string s,char c1, char c2){
        for(int i =0; i<s.length();i++){
            if(s[i]==c1){
                s[i] = c2;
            }
        }
        cout<<s;
    }
int main(){
    string s;
    cin>>s;
    char c1,c2;
    cin>>c1>>c2;
   chckpalindrome(s,c1,c2);

}