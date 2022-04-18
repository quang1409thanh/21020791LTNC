#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> s;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)  {
        cin>>x;
        s.push_back(x);
    }
    int a,b,c;
    cin>>a>>b>>c;
    s.erase(s.begin()+a-1);
    while(c-b>0){
        s.erase(s.begin()+b-1);
        c--;
    }
    cout<<s.size()<<endl;
    for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
    return 0;
}
