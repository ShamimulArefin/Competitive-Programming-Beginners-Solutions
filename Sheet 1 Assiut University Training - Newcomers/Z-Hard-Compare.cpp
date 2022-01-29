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
	ll a,b,c,d ; 
	cin >> a >> b >> c >> d ; 
	if(b*log(a) > d * log(c)) printf("YES\n");
	else printf("NO\n"); 
    return 0;
}
