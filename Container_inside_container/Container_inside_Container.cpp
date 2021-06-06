// *TOPIC : Container Inside Container
// How to use container inside container,
// which could be any container in c++ stl.
#include <iostream>
#include <vector>
using namespace std;

//* Tree

//                       1
//                      / \
//                    2   3
//                  / \  / \
//                 4  5  6  8

int main()
{
    std::vector<vector<int>> Tree;
    int edge, n1, n2;

    cout << "number of edges : " << endl;
    cin >> edge;
    Tree.resize(edge);

    for (int i = 0; i < edge; ++i)
    {
        cout << "Node1 , "
             << "Node2" << endl;

        cin >> n1 >> n2;
        Tree[n1].push_back(n2);
    }

    for (const auto &e1 : Tree)
    {
        for (const auto &e2 : e1)
        {
            cout << e2 << "  ";
        }
        cout << endl;
    }
    return 0;
}