#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length()-4;i++){
        if(s.substr(i,4)=="Zues"){
            char x=s[i+1];
            s[i+1]=s[i+2];
            s[i+2]=x;
        }
    }
    cout<<s;
}