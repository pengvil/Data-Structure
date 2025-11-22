#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[5];
    for (int i=0; i<5; i++)
        cin >> arr[i];
    int n;
    cin >> n;
    bool flag = false;
    for (int i=0; i<5; i++){
        if (arr[i] == n)
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
    cout << "FOUND" << endl;
    else
    cout << "NOT FOUND" << endl;
    return 0;
}