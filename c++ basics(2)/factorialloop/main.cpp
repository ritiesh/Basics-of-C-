#include <iostream>

using namespace std;

int main()
{
    int i,number,factorial=1;
    cin>>number;
    if(number<0)
        cout<<"cannot print negative values"<<endl;
    else if(number<=1)
        cout<<number<< " != " <<factorial<<endl;
    else
    {
        for(i=1;i<=number;i++)
        {
            factorial=factorial*i;
        }
    }
    cout<<factorial;
    return 0;
}
