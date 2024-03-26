#include<iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int len = s.size();
    if (len%8 != 0){
        s.append(8-len%8, '0');
    }
    int new_len = s.size();
    for (int i = 0; i < new_len; i+=8){
        cout << s.substr(i, 8) << endl;
    }
    return 0;
}