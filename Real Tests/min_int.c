#include <stdio.h>

int minimum(int a[], int l){
    int min = a[0];
    for(int i=0; i<l; i++)
    {
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;
}

int main()
{
    int a[5] = {5,3,-1,8,2};
    minimum(a, 5);

    return 0;
}