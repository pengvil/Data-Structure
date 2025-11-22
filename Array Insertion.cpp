#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[8] = {1,2,3,4,5};
    int n=5;
    int tgt = 10;
    int k = 2;

    for (int i=n; i>k; i--){
        arr[i] = arr[i-1];
    }
    arr[k] = tgt;
    n++;
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";

    // for (int i : arr)
    //     cout  << i << " ";

    return 0;
}