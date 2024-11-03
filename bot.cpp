#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    if (s.length() != 4) return 0;
    return 1;
}

int play(string a, string b){
    int count = 0;
    for (int i=0; i<a.length(); i++){
        if (a[i] == b[i]) {
            cout << "Vị trí " << i + 1 << " đúng\n";
            count++;
        }
        else cout << "Vị trí " << i + 1 << " sai\n";
    }
    return count;
}

int main (){

    srand(time(NULL));
    int random = 1 + (rand() % 9);
    random = random * 10 + 1 + (rand() % 9);
    random = random * 10 + 1 + (rand() % 9);
    random = random * 10 + 1 + (rand() % 9);
    string random_string = to_string(random);
    // cout << random_string << "\n";

    int step = 8;
    for (int i=0; i<step; i++){
        string a;
        cout << "Step " << i+1 << " : " << "\n";
        while (1){
            cout << "Enter a list of 4 numbers from 1 to 9 (example : 1234) : " ;
            cin >> a;
            if (check(a)){
                break;
            }
        }
        int count = play(random_string, a);
        if (count == 4){
            cout << "Chúc mừng, bạn đã thắng !!!";
            return 0;
        }
    }
    cout << "Bạn đã thua";
}