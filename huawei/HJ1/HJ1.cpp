#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str;
    while (getline(cin, str))
    {
        int len = str.size();
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                count = 0;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;

    }
    return 0;
}

// vector<string> split(string str, string pattern)
// {
//     vector<string> res;
//     if (str == "")
//     {
//         return res;
//     }
//     else
//     {
//         string strs = str + pattern;
//         size_t pos = strs.find(pattern);
//         while (pos != strs.npos)
//         {
//             string temp = strs.substr(0, pos);
//             res.push_back(temp);
//             strs = strs.substr(pos + 1, strs.size());
//             pos = strs.find(pattern);
//         }
//     }
//     return res;
// }

// int main()
// {
//     string str;
//     while (getline(cin,str))
//     {
//         vector<string> res = split(str," ");
//         cout << res.back().size() << endl;
//     }
// }