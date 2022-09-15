#include <iostream>
#include <array>

using namespace std;

int main()
{
    std::array<int,5>arr;
    arr={1,2,3,4,5};
    std::array<string*,2>str;
    str={"su","hello"};
    for(int i=str.begin();i!=str.end();i++)
    {
        cout<<i<<endl;
    }
    cout<<arr.at(3);
    cout<<arr[3];
    cout<<arr.front();
    cout<<arr.back();
    cout<<str.data();

    return 0;
}
