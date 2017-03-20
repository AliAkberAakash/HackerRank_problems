/*
* Solution to Diagonal Difference (HackerRank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdlib.h>
#include <stdio.h>

int main(){
    int n,m=0,o=0,p,q;
    scanf("%d",&n);

    p=0; q=n-1;

    int a[n][n];
    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
            scanf("%d",&a[a_i][a_j]);

            if(a_i==a_j)
                m=m+a[a_i][a_j];

            if(a_i==p&&a_j==q)
            {
                o=o+a[a_i][a_j];
                printf("%d ", a[a_i][a_j]);
                q--;
                p++;
            }
       }
    }

    printf("%d %d\n", m, o);

    printf("%d\n", abs(m-o));

    return 0;
}
