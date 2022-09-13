#include <iostream>

using namespace std;

int main()
{
    int arr[30]={12,34,56,78};
    arr[0]=22;
    arr[29]=100;
    cout<<arr[29];
    cout<<arr[3];
    cout<<arr[0];
    return 0;
}
