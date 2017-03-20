/*
* Solution to Dynamic array (Hackerrank/Data structures/Arrays)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>
#include<vector>
#include<cassert>


using namespace std;

vector <int> seqList[100000];

int main()
{
    int n,q,t,x,y;

    int lastAns=0;

    scanf("%d %d", &n, &q);

    while(q--)
    {
        scanf("%d %d %d", &t, &x, &y);

        if(t==1)
        {
            seqList[(x^lastAns)%n].push_back(y);
        }
        else
        {
            int l,k=(x^lastAns)%n;
            assert(y%(int)seqList[k].size());
            l=y%seqList[k].size();
            lastAns=seqList[k][l];
            printf("%d\n", lastAns);
        }
    }

    return 0;
}
