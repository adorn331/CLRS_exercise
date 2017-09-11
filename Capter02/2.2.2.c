void SelectSort(int *A, int n)
{
    int i, j, sub_min;
    for(i = 0; i < n ;i++){
        for(j = i + 1, sub_min = j; j < n; j++){
            if(A[j] < A[sub_min])
                sub_min = j;
        }
        if(A[sub_min] < A[i]){
            int tmp = A[i];
            A[i]  = A[sub_min];
            A[sub_min] = tmp;
        }
    }
}
