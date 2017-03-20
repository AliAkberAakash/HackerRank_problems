/*
* Solution to Designer pdf viewer (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<cstring>
#include<iostream>

int main()
{
    int a[26],l,ar,k,h=0;
    char s[11];

    for(int i=0; i<26; i++)
        scanf("%d", &a[i]);

    scanf("%s", s);

    l=strlen(s);

    for(int i=0; i<l; i++)
        if(a[s[i]-97]>h)
        h=a[s[i]-97];

    ar=l*h;

    printf("%d\n", ar);

    return 0;
}
