#include <iostream>

using namespace std;

bool check1(const string& s){
    if(s.size() <= 8){
        return false;
    }else{
        return true;
    }
}

bool check2(const string& s){
    int count[4] = {0};
    for (char c : s){
        if (c >= 'A' && c <= 'Z'){
            count[0] = 1;
        }else if (c >= 'a' && c <= 'z'){
            count[1] = 1;
        }else if (c >= '0' && c <= '9'){
            count[2] = 1;
        }else{
            count[3] = 1;
        }
    }
    if (count[0]+count[1]+count[2]+count[3] >= 3){
        return true;
    }else{
        return false;
    }
}

bool check3(const string& s){
    for (int i = 0; i < s.size()-2; i++){
        string sub = s.substr(i, 3);
        for (int j = i+1; j < s.size()-2; j++){
            if (s.substr(j, 3) == sub){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string s;
    while (getline(cin,s)){
        if (check1(s) && check2(s) && check3(s)){
            cout << "OK" << endl;
        }else{
            cout << "NG" << endl;
        }
    }
    return 0;
}