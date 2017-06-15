/*
* Solution to Twin Arrays (Hackerrank Week of Code 33)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli findMin(lli arr[], lli n)
{
    lli Min=arr[0];
    lli k;

    for(lli i=0; i<n; i++)
        {
            if(arr[i]<=Min)
            {
                Min=arr[i];
                k=i;
            }
        }

    return k;
}

lli twinArrays(lli ar1[], lli ar2[], lli n)
{
    lli i,j;

    i=j=-1;

    while(i==j)
    {
        i=findMin(ar1,n);
        j=findMin(ar2,n);
    }

    return ar1[i]+ar2[j];

}

int main()
{
    lli a[100005],b[100005],n;

    scanf("%lld", &n);

    for(lli i=0; i<n; i++)
        scanf("%lld", &a[i]);

    for(lli i=0; i<n; i++)
        scanf("%lld", &b[i]);

    lli result = twinArrays(a, b, n);

    printf("%lld\n", result);

    return 0;
}
