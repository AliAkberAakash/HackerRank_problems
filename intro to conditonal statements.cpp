/*
* Solution to Hackerrank: Intro to conditionalstatements
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);

    if(n%2)
        printf("Weird\n");
    else if((n>=2&&n<=5)||(n>20))
        printf("Not Weird\n");
    else printf("Weird\n");

    return 0;
}
