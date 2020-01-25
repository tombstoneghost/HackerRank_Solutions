#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k;

    cin>>n>>q;

    int **arr;

    arr = new int *[n];

    for(int i=0;i<n;i++)
    {
        cin>>k;
        arr[i] = new int[k];
        for(int j=0;j<k;j++)
            cin>>arr[i][j];
    }  

    int a,b;

    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}


