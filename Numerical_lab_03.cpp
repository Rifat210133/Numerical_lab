#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const long long MOD = 1000000007;
#define sz(x) (ll)(x).size()
#define rd ({ll x; cin >> x; x; })
#define dbg(x) cerr << (#x) << " = " << (x) << endl
// #define cerr if(0)cerr
#define xx first
#define yy second
#define EPSILON 0.005
int count = 0;

double f(double x)
{
    return x * x - 4 * x - 10;
}

void false_position(double a, double b, int count = 1)
{
    if (f(a) * f(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
    double c = a;
    while (abs(f(c)) >= EPSILON)
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        cout << fixed << setprecision(4)<< count << "\t\t" << a << "\t\t" << b << "\t\t" << c << "\t\t" << abs(f(c)) << endl;
        if (f(c) == 0.0)
        {
            break;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        count++;
    }

    cout << "The value of root is : " << c << endl;
}

void Solve()
{
    double a = 1, b = 9;
    cout << "it:"
         << "\t\t"
         << "a is:"
         << "\t\t"
         << "b is:"
         << "\t\t"
         << "c is:"
         << "\t\t"
         << "Error:" << endl;
    false_position(a, b);
    
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    while (t--)
        Solve();
    return 0;
}
// Coded by Md. Rifat Al Hasan (@Mr.Hacker.)
