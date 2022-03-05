#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout <<count;
}