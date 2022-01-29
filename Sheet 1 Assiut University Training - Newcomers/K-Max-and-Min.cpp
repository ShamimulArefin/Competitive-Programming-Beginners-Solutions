#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define dbl double

int main()
{
    fast();
    //forxample starts
	int a,b,c ; 
	cin >> a >> b >> c; 
	cout << min(a,min(b,c)) << " " << max(a,max(b,c)) << endl; 
    return 0;
}
