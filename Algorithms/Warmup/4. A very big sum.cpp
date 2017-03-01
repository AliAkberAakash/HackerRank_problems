/*
* Solution to A very big sum (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    long long int n,s=0;
    cin >> n;
    vector<long long int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       s+=arr[arr_i];
    }

    printf("%lld\n", s);

    return 0;
}
