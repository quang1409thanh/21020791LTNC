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
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]) {
                float x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
}