/*
* Solution to Sparse Arrays (Hackerrank/DataStructures/Arrays)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctype.h>

int main()
{
    int n,q,c=0;
    char s[1005][20];
    char*  m= (char*) malloc(25);
    char o;

    scanf("%d", &n);
    getchar();

    for(int i=0; i<n; i++)
        {
            scanf("%[^\n]", s[i]);
            getchar();
        }

    scanf("%d", &q);
    getchar();

    while(q--)
    {
        int k=0;
        scanf("%[^\n]", m);
        getchar();

       for(int i=0; i<n; i++)
            if(!strcmp(m, s[i]))
                k++;
       printf("%d\n", k);

    }

    free(m);

    return 0;
}
