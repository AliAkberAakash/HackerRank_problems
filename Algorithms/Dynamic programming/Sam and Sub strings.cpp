/*
* Solution to Sam and Sub-Strings (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#define SIZE 100000000000000

char* SubString(char* s, int pos, int num)
{
    char* c=(char*) malloc(num+1);

    int l=0;
    for(int i=pos; i<num; i++)
    {
        c[l]=s[i];
        l++;
    }

    c[l]='\0';

    return c;
}

int main()
{
    char* s= (char*) malloc(SIZE);
    int sum=0;
    scanf("%s", s);
    int k=strlen(s);

    for(int i=1; i<=k; i++)
        for(int j=0; j<k-i+1; j++)
            sum=sum+atoi(SubString(s,j,i+j));


    printf("%d\n", sum);

    return 0;
}
