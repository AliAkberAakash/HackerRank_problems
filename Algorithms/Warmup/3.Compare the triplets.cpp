/*
* Solution to Compare the triplets Hackerrank
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>

using namespace std;

int main(){
    int a[3],b[3],i,j,alice=0,bob=0;

    scanf("%d %d %d %d %d %d", &a[0],&a[1], &a[2], &b[0], &b[1], &b[2]);

    for(i=0; i<3; i++)
    {
        if(a[i]>b[i])
            alice++;
        else if(b[i]>a[i])
            bob++;
    }

    printf("%d %d\n",alice, bob);

    return 0;
}
