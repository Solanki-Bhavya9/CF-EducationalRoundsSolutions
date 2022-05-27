/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	26 May 2022	<=
    https://codeforces.com/contest/598/problem/A
*/

#include<bits/stdc++.h>

using namespace std;
using ll = long long int;

#define nn << "\n"
#define sp << " "
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define fastio ios_base ::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

void solve();

int main()
{
    fastio
    int tests=1;
    cin >> tests;
    while(tests-->0) solve();
    return 0;
}

/********************************************************************************/

void solve()
{
    ll n,ans;
    cin >> n;
    ans= n*(n+1)/2LL;
    n=log2(n);
    for(int i=0;i<=n;i++)
    {
        ans-=ll(pow(2,i));
        ans-=ll(pow(2,i));
    }
    cout << ans nn;
}