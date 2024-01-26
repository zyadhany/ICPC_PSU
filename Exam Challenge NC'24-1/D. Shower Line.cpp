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
    ll mx = 0, summ;
    int X[5][5];

    int Y[] = { 0,1,2,3,4 };

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> X[i][j];

    do
    {
        summ = X[Y[1]][Y[2]] + X[Y[2]][Y[1]] + X[Y[0]][Y[4]] + X[Y[4]][Y[0]];
        summ += X[Y[0]][Y[2]] + X[Y[2]][Y[0]] + X[Y[3]][Y[4]] + X[Y[4]][Y[3]];
        summ += X[Y[0]][Y[4]] + X[Y[4]][Y[0]] + X[Y[3]][Y[4]] + X[Y[4]][Y[3]];

        mx = max(mx, summ);
    } while (next_permutation(Y, Y + 5));
    

    cout << mx;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int size = 1;

    //cin >> size;
    for (int i = 1; i <= size; i++)
        solve(i);
}
