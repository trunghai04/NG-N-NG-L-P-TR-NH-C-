
#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define vi vector<int>
#define vll vector<ll>

int main()
{
    int t, a, m;
    cin >> t;
    while(t--)
    {
        int ans = -1;
        cin >> a >> m;
        for(int i = 0; i < m; ++i)
        {
            if(a * i % m == 1)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

