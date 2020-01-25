#include <iostream>
#include <string>
using namespace std;

int main() {
	string st1, st2;

    cin>>st1;
    cin>>st2;

    cout<<st1.length()<<" "<<st2.length()<<endl;

    cout<<st1+st2<<endl;

    cout<<st2[0]+st1.substr(1)<<" "<<st1[0]+st2.substr(1)<<endl;
  
    return 0;
}


