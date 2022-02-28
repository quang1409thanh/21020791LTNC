#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n; 
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pos=0;
    float k; cin>>k;
    for(int i=0;i<n+1;i++){
        if(a[i]<=k&&k<=a[i+1]){
            pos=i+1;
            break;
        }
    }
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=k;
    for(int i=0;i<n+1;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
}