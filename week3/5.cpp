#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<n/2;i++){
    //     if(a[i]!=a[n-1-i]) {
    //         cout<<"Asymmetric array.";
    //         return 0;
    //     }
    // }
    // cout<<"Symmetric array.";
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]!=a[j]) {
            cout<<"Asymmetric array.";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"Symmetric array.";
}