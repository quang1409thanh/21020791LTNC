#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int lowerBound, upperBound;
    cin>>lowerBound>>upperBound;
    int n=sqrt(lowerBound);
    for(int i=sqrt(lowerBound);i<=sqrt(upperBound);i++){
        cout<<i*i<<" ";
    }
}