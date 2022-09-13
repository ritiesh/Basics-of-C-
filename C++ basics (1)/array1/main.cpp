#include <iostream>
using namespace std;
int main()
{
    char s[10]={'a','b','c','d'};
    cout<<s[0];
    s[0]='u';
    cout<<s[0];
    s[9]='t';
    cout<<s[9];
    string i[10]={"yellow","ginger","ht"};
    i[0]="super";
    cout<<i[0];
    i[8]="riti";
    cout<<i[8];
    return 0;
}
