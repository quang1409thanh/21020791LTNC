#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int pos;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ') {
            pos=i;
            break;
        }
    }
    for(int i=pos;i<s.length();i++){
        while(s[i]==' '&&s[i+1]==' '){
            s.erase(i,1);
        }
    }
    cout<<s;
}