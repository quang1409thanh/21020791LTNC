int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int *mergeArr;
    mergeArr=new int[lenArr1+lenArr2];
    int firstArrIndex=0, secondArrIndex=0,mergeArrIndex=0;
    if(firstArr[0]<=firstArr[1]||secondArr[0]<=secondArr[1]){
    while(firstArrIndex<lenArr1&&secondArrIndex<lenArr2){
    if(firstArr[firstArrIndex]<=secondArr[secondArrIndex]){
        mergeArr[mergeArrIndex]=firstArr[firstArrIndex];
        firstArrIndex++;
    }
    else{
        mergeArr[mergeArrIndex]=secondArr[secondArrIndex];
        secondArrIndex++;
    }
    mergeArrIndex++;
    }
    while(firstArrIndex<lenArr1){
        mergeArr[mergeArrIndex]=firstArr[firstArrIndex];
        firstArrIndex++;
        mergeArrIndex++;
    }
    while(secondArrIndex<lenArr2){
        mergeArr[mergeArrIndex]=secondArr[secondArrIndex];
        secondArrIndex++;
        mergeArrIndex++;
    }
    }
    else {
    while(firstArrIndex<lenArr1&&secondArrIndex<lenArr2){
    if(firstArr[firstArrIndex]>=secondArr[secondArrIndex]){
        mergeArr[mergeArrIndex]=firstArr[firstArrIndex];
        firstArrIndex++;
    }
    else{
        mergeArr[mergeArrIndex]=secondArr[secondArrIndex];
        secondArrIndex++;
    }
    mergeArrIndex++;
    }
    while(firstArrIndex<lenArr1){
        mergeArr[mergeArrIndex]=firstArr[firstArrIndex];
        firstArrIndex++;
        mergeArrIndex++;
    }
    while(secondArrIndex<lenArr2){
        mergeArr[mergeArrIndex]=secondArr[secondArrIndex];
        secondArrIndex++;
        mergeArrIndex++;
    }
    }
    return mergeArr;
}