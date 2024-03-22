// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, a;
//     while (cin >> n)
//     {
//         int arr[1000] = {0};
//         while(n--){
//             cin >> a;
//             arr[a] = 1;
//         }
//         for (int i = 0; i < 1000; i++)
//         {
//             if (arr[i] == 1)
//             {
//                 cout << i << endl;
//             }
//         }   
//     }
//     return 0;
// }

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, a;
    while(cin >> n)
    {
        set<int> s;
        while(n--){
            cin >> a;
            s.insert(a);
        }
        for (auto i = s.begin(); i != s.end(); i++)
        {
            cout << *i << endl;
        }
    }
}