#include <bits/stdc++.h>

using namespace std;

string c = "XXXX";

bool change(string n, string s){
    // cout << n << " " << s;
    for (int i=0; i<s.length(); i++){
        if (s[i] == '1'){
            c[i] = n[i];
        }
    }
    int count = 0;
    for (int i=0; i<c.length(); i++){
        if (c[i] == 'X') count++;
    }
    
    if (count == 0) return 1;
    return 0;
}

bool check(string s){
    if (s.length() != 4) return 0;
    return 1;
}

int main (){

    int step = 7;
    for (int i=1; i<=step; i++){
        string a;
        int guess =  i * 1000 + i * 100 + i * 10 + i;
        cout << "Bot đoán số " << guess << "\n";
        while (1){
            // cout << c << " ";
            cout << "Nhập vào chuỗi kiểm tra (1 là đúng, 0 là sai ví dụ : 1010) : " ;
            cin >> a;
            if (check(a)){
                break;
            }
        }
        if (change(to_string(guess), a)){
            cout << "Đáp án là " << c;
            return 0;
        }
    }
    for (int i=0; i<c.length(); i++){
        if (c[i] == 'X'){
            c[i] = '9';
        }
    }
    cout << "Đáp án là " << c;
}