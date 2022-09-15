#include <iostream>

using namespace std;

void swap(int *r1,int *r2)
{
    int t;
    t=*r1;
    *r1=*r2;
    *r2=t;
}

int main()

{
    int a=20,b=30;
    swap(&a,&b);
    cout<<a<<b;
    return 0;
}
