#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main() {
    int a;
    long l;
    char c;
    float f;
    double d;

    cin>>a>>l>>c>>f>>d;

    cout<<a<<"\n"<<l<<"\n"<<c<<"\n";
    cout<<fixed<<setprecision(3)<<f<<endl;
    cout<<fixed<<setprecision(9)<<d;
    return 0;
}


