#include<bits/stdc++.h>
using namespace std;

struct EmployeeRecord{
    char name[5];
    int age;
    float salary;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    EmployeeRecord x, y[5], *p;
    x.age = 22;
    x.salary = 1234.56;
    strcpy(x.name, "Sam");
    y[2].age = 22;
    p = &x;
    p->age = 22;

    cout << x.age;
    return 0;
}