#include <bits/stdc++.h>
#define f(i, a, n) for (long long i = a; i < n; i++)
#define fr(i, n) for (long long i = 1; i <= n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define D(x) cout << #x " = " << (x) << endl
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#include <string>
#define st(v) sort(v.begin(), v.end())
#define nn cout << endl
#define INF ll_MAX

// #define int long long
typedef long long ll;
#define ok cout << "OK" << endl
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
// typedef vector<ll> vll;
// int a[10000/32+2];
/*
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(Check(a[i/32],i%32)==0)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                a[j/32]=Set(a[j/32],j%32);
            }
        }
    }
}
*/

void solve()
{

    int n;
    cin >> n;
    int a[n * n];
    memset(a, 0, sizeof(a));
    int k = 0;
    for (int i = n * n, j = 1; i >= j; i--, j++)
    {
        if (i == j)
        {
            a[k++] = i;
        }
        else
        {
            a[k++] = i;
            // D(i);
            a[k++] = j;
        }
    }

    k = 0;
    int l = 0;
    f(i, 0, n)
    {

        if (k % 2 == 0)
        {

            f(j, l, l + n)
                    cout
                << a[j] << " ";
            nn;
            k = 1;
            l += n;
        }
        else
        {
            // D(l);
            int j = l + n - 1;
            for (; j >= l; j--)
            {
                cout << a[j] << " ";
            }
            nn;
            k = 0;

            l += n;
            // D(l);
        }
    }
}

int main()
{
    speed;
    ll t;
    cin >> t;
    f(y, 1, t + 1)
    {
        solve();
    }

    return 0;
}
