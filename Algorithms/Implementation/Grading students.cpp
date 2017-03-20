/*
* Solution to Grading students (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

int main()
{
    int n, a,b;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        if(a<36)
            printf("%d\n", a);
        else
        {
            b=5-(a%5);

            if(b<3)
                a+=b;

            printf("%d\n", a);
        }
    }

    return 0;
}
