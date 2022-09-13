#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()

{
    //signed short signed_int=-10;
    //unsigned short unsigned_int=65536;
    //long int long_int=1000000000;
    //long long rent_oo=9842757490;
    float x = 876.865499890876f;
    double t= 88.888888887848378;
    long double f= 897.0898783943874L;
   /* cout<<signed_int<<endl;
    cout<<unsigned_int<<endl;
    cout<<long_int<<endl;
    cout<<rent_oo<<endl;*/
    cout<<x<<endl;
    cout<<t<<endl;
    cout<<f<<endl;
    cout<<setprecision(15);
    cout<<t<<endl;
    cout<<x<<endl;
    cout<<f<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(long long)<<endl;
    cout<<sizeof(short)<<endl;
    cout<<numeric_limits<long double>::digits10<<endl;
    return 0;
}
