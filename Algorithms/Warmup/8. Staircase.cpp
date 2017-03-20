/*
* Solution to Staircase Hackerrank
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
            printf(" ");
        for(j=1; j<=i;j++)
            printf("#");
        printf("\n");
    }

    return 0;
}
