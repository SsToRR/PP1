#include <iostream>
#include <set>
using namespace std;

int main(){

    int x;
    set<int> st;

    while(cin >> x){
        st.insert(x);
    }
    cout << st.size();

}
