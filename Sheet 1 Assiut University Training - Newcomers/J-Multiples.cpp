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
    int a,b ; 
    cin >> a >> b ; 
	(a % b == 0 or b%a==0 ) ? cout << "Multiples\n" : cout << "No Multiples\n" ;
    return 0;
}