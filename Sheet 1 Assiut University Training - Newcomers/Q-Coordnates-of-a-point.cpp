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
	double x,y ; 
	cin >> x >> y ; 
	if(x==0.0 and y==0.0) printf("Origem\n");
	else if(x==0.0) printf("Eixo Y\n");
	else if(y==0.0) printf("Eixo X\n");
	else if(x >0.0 and y >0.0) printf("Q1\n");
	else if(x <0.0 and y >0.0) printf("Q2\n");
	else if(x <0.0 and y <0.0) printf("Q3\n");
	else if(x >0.0 and y <0.0) printf("Q4\n");
    return 0;
}
