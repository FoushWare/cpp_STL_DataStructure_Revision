// *TOPIC: Map In C++

// NOTES:
// 1. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 3. It store key value pair in sorted order on the basis of key (assending/decending).
// 4. std::map is generally used in Dictionay type problems.

#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;
//* Example 01
// int main()
// {
//     std::map<string, int, std::greater<>> Map; // Descending order
//     Map["chotu"] = 90909090;
//     Map["Amit"] = 3983989;
//     Map.insert(std::make_pair("Bot", 34343434));

//     // Loop through map
//     for (auto &el1 : Map)
//     {
//         cout << el1.first << " " << el1.second << endl;
//     }
//     //Access uing [] operator
//     // cout << Map["chotu"] << endl;
//     return 0;
// }

//* Example 02

int main()
{
    std::map<string, vector<int>> Map; // Descending order
    Map["chotu"].push_back(90909090);
    Map["Amit"].push_back(3983989);
    Map["Bot"].push_back(3483989);

    // Loop through map
    for (auto &el1 : Map)
    {
        cout << el1.first << " " << endl;
        for (auto &el2 : el1.second)
        {
            cout << el2 << endl;
        }
    }
    //Access uing [] operator
    // cout << Map["chotu"] << endl;
    return 0;
}
