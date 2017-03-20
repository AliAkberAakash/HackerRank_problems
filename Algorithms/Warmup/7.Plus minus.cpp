/*
* Solution to Plus Minus (HackerRank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <stdio.h>

int main(){
    int n;
    double k,p=0,m=0,z=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
       if(arr[i]>0)  p++;
       else if(arr[i]<0)  m++;
       else z++;
    }

    k=n*1.0;

    z=z/k; p=p/k; m=m/k;

    printf("%6lf\n%6lf\n%6lf\n", p, m, z);

    return 0;
}
