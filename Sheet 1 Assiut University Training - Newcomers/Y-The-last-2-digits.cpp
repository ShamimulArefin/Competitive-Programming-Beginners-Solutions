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
	long long a,b,c,d, sum;
	cin >> a >> b >> c >> d ; 
	a %= 100 ; 
	b %= 100 ; 
	c %= 100 ; 
	d %= 100 ; 
	sum = a * b * c * d ; 
	sum %= 100;
	if(sum<10) cout << 0 << sum << endl ; 
	else 
	cout << sum << endl ;  
    return 0;
}
