/*
* Solution to Mini Max Sum Hackerrank
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>

int main()
{
    long long int a[5],temp,maxi,mini;


    for(int i=0; i<5; i++)
        scanf("%lld", &a[i]);

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    mini=a[0]+a[1]+a[2]+a[3];
    maxi=a[1]+a[2]+a[3]+a[4];

    printf("%lld %lld\n", mini,maxi);

    return 0;
}
