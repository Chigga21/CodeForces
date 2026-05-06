/* Solución para el problema 158A
    Next Round
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, r=0;
    cin >> n >> k;
    vector<int> a(n);
    
    for(int &x : a){
        cin >> x;
    }
    int trs = a[k-1];
    for(int i=0; i<n; i++){
        if (a[i] > 0 && a[i] >= trs){
            r++;
        }
    }
    cout << r << '\n';

    return 0;
}