#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int q ; cin >> q;
    map <string,int> mp;
    while(q--){
        int choose ; cin >> choose;
        switch(choose){
            case 1 :{
                string x ; cin >> x;
                int y ; cin >> y;
                mp[x] = mp[x] + y;
                break;
            }
            case 2:{
                string x; cin >> x;
                mp[x] = 0;
                break;
            }
            case 3 :{
                string x  ;  cin >> x;
                map<string,int>::iterator it = mp.find(x);
                if(it != mp.end()){
                    cout << it->second << endl;
                }else cout << 0 << endl;
                break;
            }
        }
    }
    return 0;
}