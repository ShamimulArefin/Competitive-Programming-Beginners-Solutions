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
	int a ; cin >> a; 
	int y = a/365 ; a %= 365 ; 
	int m = a/30 ; a %= 30 ; 
	printf("%d years\n", y);
	printf("%d months\n", m);
	printf("%d days\n", a);
    return 0;
}
