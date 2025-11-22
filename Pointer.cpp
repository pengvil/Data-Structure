#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // // pointer
    // int x = 10;
    // int *p = &x;
    // int y = *p;
    // cout <<"Address of integer variable x: "<< &x <<"\n";
    // cout <<"Value stored in the memory area of x: "<< x <<"\n";
    // cout <<"Address of integer pointer variable *p: "<< &p <<"\n";
    // cout <<"Address stored in the area of pointer *p: "<< p<<"\n";
    // cout <<"Address of integer variable y: "<< &y <<"\n";
    // cout <<"Value pointed to by the pointer *p: "<< *p <<"\n";
    // cout <<"Value stored in the memory area of variable y: "<< y <<"\n";
    
    // array and pointer
    float r[5] = {22.5,34.8,46.8,59.1,68.3};
    cout <<"1st element: "<< r[0] <<"\n";
    cout <<"1st element: "<< *r <<"\n";
    cout <<"3rd element: "<< r[2] <<"\n";
    cout <<"3rd element: "<< *(r+2)<<"\n";
    float *p;
    p = r; //&r[0]
    cout <<"1st element: "<< p[0] <<"\n";
    cout <<"1st element: "<< *p <<"\n";
    cout <<"3rd element: "<< p[2]<<"\n";
    cout <<"3rd element: "<< *(p+2)<<"\n";
    for(int i=0; i<5; i++, p++)
    cout <<"Element "<<(i+1)<<" is: "<<*p<<"\n";

    return 0;
}