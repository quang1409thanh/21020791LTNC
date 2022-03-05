#include<iostream>
using namespace std;    
int main(){
    int d, m, y;
    cin>>d>>m>>y;
    int y0=y-(14-m)/12;
    int x=y0+y0/4-y0/100+y0/400;
    int m0=m+12*((14-m)/12)-2;
    int day=(d+x+31*m0/12)%7;
    switch(day){
        case 0:{
            cout<<"sun";
            break;
        }
        case 1:{
            cout<<"mon";
            break;
        }
        case 2:{
            cout<<"mue";
            break;
        }
        case 3:{
            cout<<"med";
            break;
        }
        case 4:{
            cout<<"thu";
            break;
        }
        case 5:{
            cout<<"fri";
            break;
        }
        case 6:{
            cout<<"sat";
            break;
        }

    }
}