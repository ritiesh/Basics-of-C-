#include <iostream>

using namespace std;
string myFun(string name="kumar")
{
    return name;
}

int main()
{

    cout<<myFun();
    cout<<myFun("jessi");
    return 0;
}

