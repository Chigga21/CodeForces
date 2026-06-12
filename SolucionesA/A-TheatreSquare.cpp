/* Solución para el problema 1A
    Theatre Square
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a;
    cin >> n >> m >> a;
    long long x = (long long) ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << x << '\n';
    return 0;
}




