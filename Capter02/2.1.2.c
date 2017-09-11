void InsertionSort(int *A, int n){
    int tmp, i, j;
    for(i = 1; i < n; i++){
        tmp = A[i];
        for(j = i - 1; j >= 0; j--){
            if(A[j] > tmp)
                A[j + 1] = A[j];
            else
                break;
        }
        A[j + 1] = tmp;
    }
}
