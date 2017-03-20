/*
* Solution to Left Rotation (Hackerrank/DataStructures/Arrays)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

int main()
{
    queue <int> s;

    int n,d,a,k;

    scanf("%d %d", &n, &d);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a);
        s.push(a);
    }

    k=d%n;

    if(k)
    while(k--)
    {
        a=s.front();
        s.pop();
        s.push(a);
    }

    int l= s.size();

    while(l>0)
    {
        printf("%d ", s.front());
        s.pop();
        l= s.size();
    }

    printf("\n");

    return 0;
}
