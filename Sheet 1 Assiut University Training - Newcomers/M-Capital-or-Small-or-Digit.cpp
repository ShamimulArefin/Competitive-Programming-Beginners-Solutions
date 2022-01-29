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
	if(c >= 'A' and c <= 'Z')
    {
        cout<<"ALPHA\nIS CAPITAL\n";
    }
	else if(c >= 'a' and c <= 'z')
    {
        cout<<"ALPHA\nIS SMALL\n";
    }
	else
    {
        cout<<"IS DIGIT\n";
    }
    return 0;
}
