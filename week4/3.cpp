void printArrow(int n, bool left){
    if(left==1){
        for(int i=1;i<2*n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>abs(n-i)&&j<=2*abs(n-i)+1)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    }
    else {
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>2*(i-1)&&j<=(2*(i-1)+n-i+1))
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=n+1;i<2*n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j>2*(2*n-i-1)&&j<=2*(2*n-i-1)+i-n+1)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    }
}