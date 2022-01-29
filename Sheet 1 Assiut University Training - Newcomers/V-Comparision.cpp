#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define dbl double
#define r printf("Right\n")
#define w printf("Wrong\n")

int main()
{
    fast();
    //forxample starts
	int a,b ; 
	char c ;  
	scanf("%d %c %d" , &a , &c , &b) ; 
	if(c=='<') (a<b) ? r : w ; 
	if(c=='>') (a>b) ? r : w ; 
	if(c=='=') (a==b) ? r : w ; 
    return 0;
}
