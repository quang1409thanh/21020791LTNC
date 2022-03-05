#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    if(n1+n2>n3&&n1+n3>n2&&n2+n3>n1){
        float p=1.0*(n1+n2+n3)/2;
        float s=sqrt(p*(p-n1)*(p-n2)*(p-n3));
        cout<<fixed<<setprecision(2)<<s;
        cout<<endl;
        cout<<p;
    }
    else{
        cout<<"invalid";
    }
}