#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int x;
    cin>>x;
    double sum=1,factorial=1,tam=1;
    double oldsum=0;
    int count=1;
    while(sum-oldsum>0.001){
        oldsum=sum;
        tam*=x;
        factorial*=count;
        sum+=tam/factorial;
        count++;
    }
    cout<<fixed<<setprecision(4)<<sum<<endl;
}
