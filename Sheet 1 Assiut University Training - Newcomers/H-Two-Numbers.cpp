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
	double a,b;
	cin >> a >>b;
	cout << "floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<nl; 
	cout << "ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<nl; 
	cout << "round "<<a<<" / "<<b<<" = "<<round(a/b)<<nl; 
    return 0;
}
