#include <bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while (test--){
		long long x, ans = 1 ; 
		cin >> x;
		while(x){
			ans *= x ; 
			x--;
		}
		cout << ans << endl; 
	}
		
	return 0;
}
