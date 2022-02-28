#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    const int MAX_N=100;
    int n; cin>>n;
    double arrayX[MAX_N];
    double sum=0,sum1=0;
    for(int i=0;i<n;i++){
        cin>>arrayX[i];
        sum+=arrayX[i];
    }
    double mean=sum/n;
    for(int i=0;i<n;i++){
        sum1+=pow(arrayX[i]-mean,2);
    }
    cout<<fixed<<setprecision(2)<<sum1/n<<endl;
}