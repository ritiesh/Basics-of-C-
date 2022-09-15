#include <iostream>

using namespace std;

int main()
{
    string name="ramu";
    string*p;
    p=&name;
    //cout<<p;
    //cout<<*p;
    *p="venamuda";
    //cout<<*p;
    //cout<<name;
    string food="pizza";
    string &meal=food;
    cout<<meal;
    cout<<food;
    cout<<&food;
    return 0;
}
