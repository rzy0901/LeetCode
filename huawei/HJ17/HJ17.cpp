#include <iostream>
#include <sstream>
#include <vector>
#include <regex>

using namespace std;   

vector<string> split(string& s, char c){
    vector<string> res;
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, c)){
        res.push_back(temp);
    }
    return res;
}

vector<string> split2(string& s, char c){
    vector<string> res;
    int sublen = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == c){
            res.push_back(s.substr(i-sublen, sublen));
            sublen = 0;
        }else{
            sublen++;
        }
    }
    if (s.back()!= c){
        res.push_back(s.substr(s.size()-sublen, sublen));
    }
    return res;
}

int main(){
    string s;
    char c = ';';
    while(getline(cin, s)){
        vector<string> vec = split(s, c);
        int x = 0, y = 0;
        for (string& str : vec){
            if (str.empty()){
                continue;
            }
            string sub = str.substr(1);
            if (regex_match(sub, regex("[0-9]+"))){
                int num = stoi(sub);
                if (str[0] == 'A'){
                    x -= num;
                }else if (str[0] == 'D'){
                    x += num;
                }else if (str[0] == 'W'){
                    y += num;
                }else if (str[0] == 'S'){
                    y -= num;
                }
            }
            /*CPP 不可以使用try catch来处理异常输入，这是由于stoi会将"1A"转化为1，而不抛出异常。*/
            // try {
            //     string sub = str.substr(1);
            //     int num = stoi(sub);
            //     cout << sub << ", " << num << endl; 
            //     if (str[0] == 'A') {
            //         x -= num;
            //     } else if (str[0] == 'D') {
            //         x += num;
            //     } else if (str[0] == 'W') {
            //         y += num;
            //     } else if (str[0] == 'S') {
            //         y -= num;
            //     }
            // } catch (std::exception& e) {
            //     break;
            // }
        }
        cout << x << "," << y << endl;
    }
    return 0;
}