/*
* Solution to Time conversion (HackerRank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int o,t,k,i;
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);

    k=strlen(time)-2;

    o=time[0]-48;
    t=time[1]-48;
    t=(o*10)+t;

    if(time[8]=='P')
    {
        if(t!=12)
            t+=12;
        printf("%02d", t);
    }
    else
    {
        if(t==12)
            t=0;
        printf("%02d", t);
    }

    for(i=2; i<k;i++)
        printf("%c", time[i]);

    printf("\n");

    return 0;
}
