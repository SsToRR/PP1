//deuterium spasipo za reshenie
#include <iostream>
#include <string>
using namespace std;

string toDigit(string s){
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

string toWord(char c){
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

    int plus = s.find('+');
    string left = s.substr(0, plus);
    string right = s.substr(plus + 1);

    string num1 = "", num2 = "";

    for(int i = 0; i < left.size(); i += 3)
        num1 += toDigit(left.substr(i, 3));
    for(int i = 0; i < right.size(); i += 3)
        num2 += toDigit(right.substr(i, 3));

    int sum = stoi(num1) + stoi(num2);
    string result = to_string(sum);

    for(int i = 0; i < result.size(); i++)
        cout << toWord(result[i]);
}