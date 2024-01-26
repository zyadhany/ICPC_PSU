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
    int n;

    char X[500][500];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> X[i][j];

            if (i == j || i == n - j - 1)
            {
                if (X[i][j] != X[0][0]) {
                    cout << "NO";
                    return;
                }
            }
            else
            {
                if (X[i][j] != X[0][1]) {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    
    if (X[0][0] == X[0][1]) cout << "NO";
    else cout << "YES";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int size = 1;

    //cin >> size;
    for (int i = 1; i <= size; i++)
        solve(i);
}
