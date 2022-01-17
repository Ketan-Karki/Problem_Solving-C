#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,k=0,l=0,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int A[m][n];
    printf("Enter elements of matrix: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     while (k < m && l < n) {
        /* Print the first row from the remaining rows */
        for (i = l; i < n; i++) {
            printf("%d ", A[k][i]);
        }
        k++;

        /* Print the last column from the remaining columns
         */
        for (i = k; i < m; i++) {
            printf("%d ", A[i][n - 1]);
        }
        n--;

        /* Print the last row from the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; i--) {
                printf("%d ", A[m - 1][i]);
            }
            m--;
        }

        /* Print the first column from the remaining columns
         */
        if (l < n) {
            for (i = m - 1; i >= k; i--) {
                printf("%d ", A[i][l]);
            }
            l++;
        }
    }
    return 0;
}
