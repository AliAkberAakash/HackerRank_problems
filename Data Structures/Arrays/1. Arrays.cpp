/*
* Solution to Arrays (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<ctime>

static int k=0;

void print(int x)
{
    if(k==x)
        return;
    int a;

    scanf("%d", &a);
    k++;
    print(x);

    printf("%d ", a);
}

int main()
{
    clock_t t;

    t=clock();

    int n,a[1000];
    scanf("%d", &n);

    print(n);
    printf("\n\n");

    t=clock()-t;

    printf("%lf", ((float)t)/CLOCKS_PER_SEC);

    return 0;
}
