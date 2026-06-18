/* Solución para el problema 2217B
    Flip The Bit 
*/
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        int n, k, index;
        cin >> n >> k;

        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];

        cin >> index;
        index--;
        int x = a[index];
        int left = 0, right = 0;

        bool bloque = false;
        for(int i = index-1; i>=0; i--){    
            if (a[i] != x){
                if (!bloque) {left++; bloque = true;}
            }
            else {
                bloque = false;
            }
        }

        bloque = false;
        for(int i=index+1; i<n; i++){
            if (a[i] != x){
                if(!bloque) {right++; bloque = true;}
            }
            else {
                bloque = false;
            }
        }

        int ops = max(left * 2, right * 2);
        if (ops % 2 != 0) {ops++;}
        cout << ops << endl;
    }

    return 0;
}