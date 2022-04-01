int** transpose(int** matrix, int nRows, int nCols){
    int **transposedMatrix=new int *[nCols];
    for(int i=0;i<nCols;i++){
        transposedMatrix[i]=new int [nRows];
    }
    for(int i=0;i<nCols;i++){
        for(int j=0;j<nRows;j++){
            transposedMatrix[i][j]=matrix[j][i];
        }
    }
    return transposedMatrix;
}