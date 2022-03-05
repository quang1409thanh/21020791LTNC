#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float c,f;
    cin>>c;
    f=c*1.80+32;
    cout << fixed << setprecision(2) << f;
    return 0;
    
}