#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    const int MAX_N=1000;
    int n; cin>>n;
    double arrayX[MAX_N];
    double arrayY[MAX_N];
    for(int i=0;i<n;i++){
        cin>>arrayX[i];
    }
    for(int i=0;i<n;i++){
        cin>>arrayY[i];
    }
    double product=0;
    for(int i=0;i<n;i++){
        product+=arrayX[i]*arrayY[i];
    }
    cout<<fixed<<setprecision(2)<<product<<endl;
}