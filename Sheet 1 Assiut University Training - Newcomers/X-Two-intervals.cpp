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
	long long l1,r1,l2,r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if ((r1 < l2) ||  (r2 < l1)) printf("-1\n");
 	else cout << max(l1, l2) << " " << min(r1, r2) << endl;  
    return 0;
}
