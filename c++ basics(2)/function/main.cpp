#include <iostream>

using namespace std;

int maximum(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
void printing()
{

    cout<<"super dulex"<<endl;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<maximum(a,b);
    printing();
    return 0;
}

