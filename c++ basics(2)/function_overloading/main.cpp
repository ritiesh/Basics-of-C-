#include <iostream>

using namespace std;
int myFun(int a,int b)
{
    return a+b;
}
string myFun(string first, string second)

{
        return first + second;
}
int main()
{
    cout <<myFun(10,20)<<endl;
    cout<<myFun("ram","raju")<<endl;
    return 0;
}
