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
	double a ; cin >> a ;
	if(ceil(a)==floor(a)) cout <<"int " << int(a) << endl  ;
	else cout << "float "<< int(a) << " " << a - int(a) << endl ;  
    return 0;
}
