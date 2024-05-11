#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MOD = 1000000007;
#define sz(x) (ll)(x).size()
#define rd ({ll x; cin >> x; x; })
#define dbg(x) cerr << (#x) << " = " << (x) << endl
#define ld long double
// #define cerr if(0)cerr
#define xx first
#define yy second

ld Main_function(ld x)
{
    return x * x * x - 4 * x - 5;
}

ld differentiate_function(ld x)
{
    return 3 * x * x - 4;
}

ld Error(ld a, ld b)
{
    return abs((a - b) / a);
}

int iter = 0;

ld NewtonRaphson(ld a, ld error)
{
    ld b = a - Main_function(a) / differentiate_function(a);
    while (Error(a, b) > error) {
        cout << fixed << setprecision(4) << iter << "\t\t" << a << "\t\t" << b << "\t\t" << Error(a, b) << endl;
        a = b;
        b = a - Main_function(a) / differentiate_function(a);
        iter++;
    }
    cout << "The root of the equation is:" << endl;
    return b;
}

void Solve()
{
    ld a = 4.0;
    ld error = 0.001;
    cout << "Newton-Raphson Method" << endl;
    cout << "Iter"
         << "\t\ta: "
         << "\t\tb: "
         << "\t\tError: " << endl;
    cout << NewtonRaphson(a, error) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    Solve();
}
// Coded by Md. Rifat Al Hasan (@Mr.Hacker.)
