/*
* Solution to Hackerrank 2D array -DS by  Shafaet
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

using namespace std;


int main(){
    int a[6][6], b[7];
    int i,j,s,m,k,l,o;

    for(i=0; i<6; i++)
        for(j=0; j<6; j++)
            scanf("%d", &a[i][j]);
    i=j=0;
    m=-9999999;
    while(i<4)
    {
        s=0;
        for(k=0; k<3; k++)
        {
            for(l=0; l<3; l++)
            {
                if((k==1&&l==0)||(k==1&&l==2))
                {
                    continue;
                }
                s+=a[i+k][j+l];
            }
        }


        j++;
        if(j>=4)
        {i++; j=0;}

        if(s>m)
            m=s;

    }

    printf("%d\n", m);


    return 0;
}
