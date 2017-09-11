//二分查找迭代版本
int binary_search(int *A, int n, int key)
{
    int left = 0, right = n - 1, middle;

    while(left <= right){
        middle = (left + right) / 2;
        if(A[middle] > key)
            right = middle - 1;
        else if(A[middle] < key)
            left  = middle + 1;
        else
            return middle;
    }
    return -1;
}

