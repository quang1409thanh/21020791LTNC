
int* getPointerToArray(int n){
    int *arr;
    arr= new int [1001];
    for(int i=0;i<n;i++) cin>>arr[i];
    return arr;
}