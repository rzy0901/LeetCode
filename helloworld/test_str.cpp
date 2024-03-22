#include <iostream>
#include <string>

using namespace std;

// https://cplusplus.com/reference/string/string/

int main()
{
    string str = "abc,de,f";
    cout << "-----Access-----" << endl;
    cout << str.size() << endl;
    cout << str.length() << endl;
    cout << str.front() << endl;
    cout << str.back() << endl;
    cout << str.at(0) << endl;
    cout << "-----Iterators-----" << endl;
    for (string::iterator it = str.begin(); it!=str.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (string::reverse_iterator it = str.rbegin(); it!=str.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << "-----Operations-----" << endl;
    int pos = str.find(",");
    cout << pos << endl;
    // substr(start, length)
    cout << str.substr(0, pos) << endl;
    // find_first_of("abc") find the first position of a, b, or c
    int pos2 = str.find_first_of("mla");
    cout << pos2 << endl;
    cout << str.substr(0, pos2+1) << endl; 
    return 0;
}