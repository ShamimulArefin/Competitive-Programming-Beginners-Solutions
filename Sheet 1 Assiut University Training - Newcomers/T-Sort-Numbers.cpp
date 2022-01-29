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
	int a[3],b[3] ; 
	for(int i=0 ; i < 3 ; i++) cin >> a[i] , b[i] = a[i] ; 
	sort(a,a+3) ;
	for(int i=0 ; i < 3 ; i++) cout << a[i] << endl ; cout << endl ;   
	for(int i=0 ; i < 3 ; i++) cout << b[i] << endl ;  
    return 0;
}
