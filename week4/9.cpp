void sort(float array[], int size, bool isAscending){
    if(isAscending){
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                if(array[j]<array[i]){
                    float x=array[i];
                    array[i]=array[j];
                    array[j]=x;
                }
            }
        }
    }
    else {
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                if(array[j]>array[i]){
                    float x=array[i];
                    array[i]=array[j];
                    array[j]=x;
                }
            }
        }
    }
}