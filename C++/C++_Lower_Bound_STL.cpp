#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main() {

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int q,key;

    cin>>q;

    for(int i=0;i<q;i++)
    {
        cin>>key;

        vector<int>::iterator itr = lower_bound(v.begin(),v.end(),key);
        if(v[itr - v.begin()] == key)
            cout<<"Yes "<<(itr - v.begin() + 1)<<endl;
        else
            cout<<"No "<<(itr - v.begin() + 1)<<endl;
    }

    return 0;
}

