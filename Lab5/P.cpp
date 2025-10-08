#include <bits/stdc++.h>
using namespace std;

int w, h, n, x1, x2, _y1, _y2, ans;
int canvas[101][101];
    
int main() {
    
    
    cin >> w >> h >> n;
    
    for(int i = 1; i <= n; i++){
        cin >> x1 >> _y1 >> x2 >> _y2;
        for(int x = x1; x < x2; x++){
            for(int y = _y1; y < _y2; y++){
                canvas[x][y] = 1;
            }
        }
    }
    for(int i = 0; i < w; i++){
        for(int j = 0; j < h; j++){
            if(!canvas[i][j]) ans++;
        }
    }
    cout << ans;
    return 0;
}
