//MergeSort
#include<stdio.h>
#include<stdlib.h>
void Merge(int *A, int p, int q, int r)
{
    int len1 = q - p + 1;
    int len2 = r - q ;

    int *L = malloc(sizeof(int) * len1);
    int *R = malloc(sizeof(int) * len2);
    int i;

    for(i = 0; i < len1; i++)
        L[i] = A[p + i ];
    for(i = 0; i < len2; i++)
        R[i]  = A[q + i + 1];

    int j = 0, k = 0;
    for(i = p; i <= r; i++){
        printf("j:%d, k:%d, i:%d|\n", j, k, i);
        if(L[j] <= R[k]){
            if(j < len1)
                A[i] = L[j++];
            else
                break;
        }
        else{
            if(k < len2)
                A[i] = R[k++];
            else
                break;
        }
    }

    while(j < len1)
        A[i++] = L[j++];
    while(k < len2)
        A[i++] = R[k++];

    free(L);
    free(R);
}

void Sort(int *A, int left, int right)
{
    if(left < right){
        int middle = (left + right) / 2;
        Sort(A, left, middle);
        Sort(A, middle + 1, right);
        Merge(A, left, middle, right);
    }
}

void MergeSort(int *A, int n)
{
    Sort(A, 0, n - 1);
}
