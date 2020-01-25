#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        int c=0;
        double AA = A;
    
        while(AA>1)
        {
            c = c + 1;
            AA /= 16;
        }
        c = c + 2;

        int l = 0;
        double BB = B;

        if(B<0)
            BB = B * (-1);

        while(BB>=1)
        {
            l = l + 1;
            BB /= 10;
        }
        l = 15 - l - 3;

        cout<<showbase;
        cout<<hex<<nouppercase<<setw(c)<<(long long int)A<<endl;

        cout.unsetf(ios::floatfield);

        cout<<fixed<<setprecision(2);
        cout<<showbase<<internal<<setfill('_');

        if(B>0)
            cout<<setw(l)<<"+"<<B<<endl;
        else
            cout<<setw(l)<<"-"<<(-1)*B<<endl;

        cout.precision(9);
        cout<<scientific<<uppercase<<C<<endl;
	}
	return 0;

}
