// The first line of the input contains  where  is the number of queries. The next  lines contain  query each. Each query consists of two integers  and  where  is the type of the query and  is an integer.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int> s;
    int q;
    cin>>q;
    for(int i=0;i<q;i++)  {
        int x,y;
        cin>>x>>y;
        if(x==1) s.insert(y);
        else if(x==2) s.erase(y);
        else if(x==3) {
            if(s.find(y)!=s.end()) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        
    }

    return 0;
}
