#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int search(vector<int> a,int x){
    for(int i=0;i<a.size();i++){
        if(a[i]==x) return i+1;
    }
    return -1;
}
int searchcantren(vector<int> a, int x){
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(a[i]>x) return i+1;
    }
    return -1;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }  
    int q;
    cin>>q;
    while(q-->0){
        int t;
        cin>>t;
        if(search(a,t)!=-1) cout<<"Yes "<<search(a,t)<<endl;
        else cout<<"No "<<search(a,t)
    }
}
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ; cin >> n;
    vector <int> v;
    for(int i = 0; i < n ;i++) {
        int x ; cin >> x;
        v.push_back(x);
    }
    //////
    int t  ; cin >> t;
    while(t--){
        int val ; cin >> val;
        vector<int>::iterator low = lower_bound(v.begin(),v.end(),val);//auto low = lower_bound(v.begin(),v.end(),val);
        if (v[low-v.begin()] == val) {
            cout << "Yes " << low-v.begin() + 1 << endl;
        }
        else {
            cout << "No " << low-v.begin() + 1 << endl;
        }
    }
    return 0;
}