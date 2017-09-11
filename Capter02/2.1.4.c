#include<stdio.h>
//二进制C实现
void add(int *a, int *b, int *c, int n)
{
    int carry = 0, i = 0;
    for(i = n - 1; i >= 0; i--){
        c[i + 1] = (a[i] + b[i] + carry) % 2;
        carry  = (a[i] + b[i] + carry) / 2;
    }
    c[0] = carry;
}

//泛化为多进制
void add(int *a, int *b, int *c, int n, int base)
{
    int n = 3;
    int carry = 0, i = 0;
    for(i = n - 1; i >= 0; i--){
        c[i + 1] = (a[i] + b[i] + carry) % base;
        carry  = (a[i] + b[i] + carry) / base;
    }
    c[0] = carry;
}
