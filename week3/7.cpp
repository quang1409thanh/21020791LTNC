#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count1=0, count2=0,count3=0;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
            count1++;
        }
        else if(s[i]<='9'&&s[i]>='0'){
            count2++;
        }
        else 
            count3++;
        }
    cout <<count1<<" "<<count2<<" "<<count3;
}