#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define dbl double
#define yes printf("Yes\n")
#define w printf("Wrong\n")

int main()
{
    fast();
    //forxample starts
	int a,b,ans ; char c ,d ;  
	scanf("%d %c %d %c %d" , &a , &c , &b , &d , &ans) ; 
	if(c=='+') (ans==a+b) ? yes : printf("%d\n", a+b);
	if(c=='-') (ans==a-b) ? yes : printf("%d\n", a-b);
	if(c=='*') (ans==a*b) ? yes : printf("%d\n", a*b); 
    return 0;
}
