#include <iostream>
#include <sstream>

using namespace std;

long long int ip2int(const string& s){
    stringstream ss(s);
    long long int a, b, c, d;
    char ch = '.';
    ss >> a >> ch >> b >> ch >> c >> ch >> d;
    return (a << 24) + (b << 16) + (c << 8) + d;
}

string int2ip(int a){
    return to_string((a >> 24) & 0xFF) + "." + to_string((a >> 16) & 0xFF) + "." + to_string((a >> 8) & 0xFF) + "." + to_string(a & 0xFF);
}

int main(){
    string s;
    long long int a;
    while (cin >> s >> a){
        cout << ip2int(s) << endl;
        cout << int2ip(a) << endl;
    }
    return 0;
}