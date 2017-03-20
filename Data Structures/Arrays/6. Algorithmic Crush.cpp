/*
* Solution to Algorithmic Crush (Hackerrank/DataStructures/Arrays)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>

long long int s[1000000];

int main()
{
    long long int n, m, a,b,k, i,t;

    scanf("%lld %lld", &n, &m);

    while(m--)
    {
        scanf("%lld %lld %lld", &a, &b, &k);

        for(i=a; i<=b; i++)
            s[i]+=k;
    }

    t=s[1];

    for(i=2; i<=n; i++)
        if(s[i]>t)
            t=s[i];

    printf("\n%lld\n", t);


    return 0;
}
