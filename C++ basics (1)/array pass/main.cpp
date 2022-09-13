#include <iostream>

using namespace std;
void arrayu(int array[],int sizeofoperator)
{
    for(int i=0;i<sizeofoperator;i++)
    {
        cout<<array[i]<<endl;
    }
}

int main()

{
    int bucky[3]={1,5,7};
    int jessie[4]={3,5,6,7};
    arrayu(bucky,3);
    arrayu(jessie,4);
    return 0;
}
