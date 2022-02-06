#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	long long mx = -INT_MAX; //-INT_MAX = 2147483647
	for(int i=0 ; i < n ; i++){
		long long x ; 
		cin >> x ; 
		if(x > mx){
			mx = x ; 
		}
	}	
	cout << mx << endl; 
	return 0;
}
