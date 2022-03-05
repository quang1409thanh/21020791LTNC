#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    if(s.size()<6||s.size()>15||(s[0]<='9'&&s[0]>='0'))
    {
        cout<<"Invalid username.";
        return 0;
    }
    else for(int i=1;i<s.size();i++)
    {
        if(s[i]>'z'||(s[i]<'a'&&s[i]>'Z')||(s[i]<'A'&&s[i]>'9')||s[i]<'0'){
            cout<<"Invalid username.";
            return 0;
        }
    }
    cout<<"Valid username.";
}