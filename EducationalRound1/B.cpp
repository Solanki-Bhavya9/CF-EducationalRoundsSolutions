/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	27 May 2022	<=
    https://codeforces.com/contest/598/problem/B
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
void work(string &st,int s,int e,int r)
{
    r=r%(e-s+1);
    rotate(st.begin()+s,st.begin()+e+1-r,st.begin()+e+1);
}

int main()
{
    fastio
    int tests=1;
    //cin >> tests;
    while(tests-->0) solve();
    return 0;
}

/********************************************************************************/

void solve()
{
    string st;
    cin >> st;
    int q,s,e,r;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        cin >> s >> e >> r;
        work(st,s-1,e-1,r);
    }
    cout << st nn;
}