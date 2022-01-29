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
	char c;
	cin >> c ; 
	if(c >= 'A' and c <= 'Z') printf("%c", c+32);
	if(c >= 'a' and c <= 'z') printf("%c", c-32);
    return 0;
}
