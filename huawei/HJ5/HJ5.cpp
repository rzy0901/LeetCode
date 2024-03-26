#include <iostream>

using namespace std;

// int main(){
//     string s;
//     while(cin>>s) {
//         cout << stoi(s, 0, 16) << endl;
//     }
//     return 0;
// }

int main() {
    string s;
    int res = 0, temp = 0;
    while(cin>>s) {
        for (int i = 2; i < s.size(); i++){
            if (s[i]>='0' && s[i]<='9'){
                temp = s[i] - '0';
            }else{
                temp = s[i] - 'A' + 10;
            }
            res = res*16 + temp;
        }
        cout << res << endl;
    }
    return 0;
}