/*
* Solution to Apple and orange (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

int main()
{
    int s,t,a,b,m,n,k,p,o;

    p=o=0;

    scanf("%d %d %d %d %d %d", &s, &t, &a, &b, &m, &n);

    for(int i=0; i<m; i++)
    {
        scanf("%d", &k);

        k=a+k;

        if(k>=s&&k<=t)
            p++;
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &k);

        k=b+k;

        if(k>=s&&k<=t)
            o++;
    }

    printf("%d\n%d\n", p,o);

    return 0;
}
