/*
* Solution to Simple Array Sum (Hackerrank)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include <cstdio>

using namespace std;


int main(){
    int n,s=0;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       s+=arr[arr_i];
    }

    printf("%d\n", s);
    return 0;
}
