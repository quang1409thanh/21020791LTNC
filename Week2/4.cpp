#include<iostream>
using namespace std;
int main(){
    int total,totallegs;
    cin>>total>>totallegs;
    bool flag=false; 
    int numChicken,numDog;
    for(numDog=1;numDog<total;numDog++){
        if(numDog*4+(total-numDog)*2==totallegs){
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<"chiken = "<<total-numDog<<", "<<"dog = "<<numDog<<endl;
    }
    else cout<<"invalid"<<endl;
}