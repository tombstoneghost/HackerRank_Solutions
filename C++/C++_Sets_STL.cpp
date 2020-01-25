#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;

    int n,x,y;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;

        if(x == 1)
        {
            s.insert(y);
        }
        if(x == 2)
        {
            s.erase(y);
        }
        if(x == 3)
        {
            set<int>::iterator itr = s.find(y);

            if(itr == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }

    return 0;
}




