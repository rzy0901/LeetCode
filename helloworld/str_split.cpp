#include <iostream>
#include <sstream>
#include <vector>

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
        vector<string> res = split(s, c);
        for(int i = 0; i < res.size(); i++){
            cout<<res[i]<<endl;
        }
    }
    return 0;
}