#include <bits/stdc++.h>
using namespace std;

string Arbuz(string s){

    if(s == "ZER") return "0";
    if(s == "ONE") return "1";
    if(s == "TWO") return "2";
    if(s == "THR") return "3";
    if(s == "FOU") return "4";
    if(s == "FIV") return "5";
    if(s == "SIX") return "6";
    if(s == "SEV") return "7";
    if(s == "EIG") return "8";
    if(s == "NIN") return "9";
    return "";
}

string Mango(char c){

    if(c == '0') return "ZER";
    if(c == '1') return "ONE";
    if(c == '2') return "TWO";
    if(c == '3') return "THR";
    if(c == '4') return "FOU";
    if(c == '5') return "FIV";
    if(c == '6') return "SIX";
    if(c == '7') return "SEV";
    if(c == '8') return "EIG";
    if(c == '9') return "NIN";
    return "";
}

int main(){

    string s;
    cin >> s;

    int op_pos = -1;
    char op;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
            op_pos = i;
            op = s[i];
            break;
        }
    }

    string left = s.substr(0, op_pos);
    string right = s.substr(op_pos + 1);

    string num1 = "", num2 = "";

    for(int i = 0; i < left.size(); i += 3)
        num1 += Arbuz(left.substr(i, 3));

    for(int i = 0; i < right.size(); i += 3)
        num2 += Arbuz(right.substr(i, 3));

    int n1 = stoi(num1), n2 = stoi(num2), result;

    if(op == '+') result = n1 + n2;
    else if(op == '-') result = n1 - n2;
    else if(op == '*') result = n1 * n2;

    string res_str = to_string(result);

    for(int i = 0; i < res_str.size(); i++)
        cout << Mango(res_str[i]);
    cout << endl;
}
