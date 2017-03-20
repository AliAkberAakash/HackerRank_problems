/*
* Solution to Kangaroo (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

int main()
{
    int x1,v1,x2,v2,flag=1;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    while(x1!=x2)
    {
        if((x1<x2&&v1<v2)||(x2<x1&&v2<v1)||(x1<x2&&v1==v2)||(x2<x1&&v1==v2)||(x1==x2&&v1<v2)||(x1==x2&&v2<v1))
        {
            printf("NO\n");
            flag=0;
            break;
        }

        x1+=v1;
        x2+=v2;
    }

    if(flag)
        printf("YES\n");


    return 0;
}
