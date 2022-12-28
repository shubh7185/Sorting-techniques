#include <stdio.h>

void shellsort(int A[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap >= 1; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = A[i];
            j = i - gap;
            while (j >= 0 && A[j] > temp)
            {
                A[j + gap] = A[j];
                j = j - gap;
            }
            A[j + gap] = temp;
        }
    }
}

    int main()
    {
        int a[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3};
        int n = 10;
        shellsort(a, n);
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        return 0;
    }