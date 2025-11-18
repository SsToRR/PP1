#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; string s;
    queue<string> q;

    cin >> n;

    for(int i = 1, x; i <= n; i++){
        cin >> x;
        if(x == 1){
            cin >> s;
            q.push(s);
            cout << q.front() << '\n';
        }
        else {
            q.pop();
            if(q.empty()) cout << "queue is empty\n";
            else cout << q.front() << '\n';
        }
    }

return 0;
}


