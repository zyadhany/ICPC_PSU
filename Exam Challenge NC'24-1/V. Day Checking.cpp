#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <unordered_map>

#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define vii vector<vi>
#define vc vector<char>
#define vcc vector<vc>
#define vp vector<pl>
#define mi map<ll,ll>
#define mc map<char,int>
#define sortx(X) sort(X.begin(),X.end());
#define all(X) X.begin(),X.end()
#define ln '\n'
#define YES {cout << "YES\n"; return;}
#define NO {cout << "NO\n"; return;}

const int MODE = 1e9 + 7;

using namespace std;

void solve(int tc) {
    int l, r, k;
    string s, t;
    string X[] = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday" };

    cin >> s >> t;

    for (int i = 0; i < 7; i++)
    {
        if (X[i] == s) l = i;
        if (X[i] == t) r = i;
    }

    k = (r - l + 7) % 7;

    if (k == 0 || k == 2 || k == 3) cout << "YES\n";
    else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int size = 1;

    //cin >> size;
    for (int i = 1; i <= size; i++)
        solve(i);
}
