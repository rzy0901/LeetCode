#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string str;
    char check;
    getline(cin, str);
    cin >> check;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (tolower(str[i]) == tolower(check))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
