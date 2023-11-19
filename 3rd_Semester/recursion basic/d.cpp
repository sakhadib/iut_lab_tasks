#include<bits/stdc++.h>
using namespace std;

#define ll long long 

ll c = 0;
ll fun(ll n,ll k)
{
	if(n <= k) return 1;

	if(n%2)
	{
		return fun(n/2 , k) + fun(n/2 + 1, k);
	}

	return 2 * fun(n/2 , k);
}

int main()
{
	ll n,k;
	while(cin>>n>>k)
	{
		ll crates = fun(n,k);
		cout << crates << endl;
	}
}