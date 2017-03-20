/*
* Solution to Between two sets (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

void Swap(int* a, int* b)
{
    int* temp=a;
    a=b;
    b=temp;
}

int gcd(int a, int b)
{
    if(a<b)
    Swap(&a, &b);

    if(b==0)  return a;
    if(a%b==0)  return b;
    return  gcd(b, a%b);
}
int lcm(int x, int y)
{
    int l=0,g=gcd(x,y);

    if(g)
    l=(x*y)/g;

    return l;
}
int nod(int x, int y)
{

    int k=0;

    for(int i=x; i<=y; i++)
        if((y%i==0)&&(i%x==0))
            k++;

    return k;
}


int main()
{
    int m,n,a,b,lc=1,gc=1;

    scanf("%d %d", &m, &n);

    scanf("%d", &a);

    lc=a;

    for(int i=1; i<=m-1; i++)
    {
        scanf("%d", &a);
        lc=lcm(lc,a);
    }

    scanf("%d", &a);
    gc=a;
    for(int i=1; i<=n-1; i++)
    {
        scanf("%d", &a);
        gc=gcd(gc,a);
    }

    printf("%d %d\n", gc, lc);

    if(gc==0||lc==0)
    b==0;
    else
    b=nod(lc,gc);

    printf("%d\n", b);

    return 0;
}
