//! TOPIC: std::set<T>

//* NOTES:
//* 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
//* 2. It is usually implemented using Red-Black Tree.
//* 3. Insertion, Removal, Search have logarithmic complexity.
//* 4. If we want to store user defined data type in set then we will have to provide
//*    compare function so that set can store them in sorted order.
//* 5. We can pass the order of sorting while constructing set object.

//* BOTTOM LINE:
//* It store unique elements and they are stored in sorted order (A/D)

#include <iostream>
#include <set>
#include <string>
#include <functional>

using namespace std;

class Person
{
public:
    float age;
    string name;
    //! Needed to compare the objects
    bool operator<(const Person &rhs) const { return age < rhs.age; } //Accending
    bool operator>(const Person &rhs) const { return age > rhs.age; } //deccending
};

int main()
{

    //! Dealing with objects
    set<Person> Set2 = {{30, "foush"}, {26, "ahmed"}};

    cout << "SET 2 Example dealing with object " << endl;

    for (const auto &person : Set2)
    {
        cout << person.age << " " << person.name << endl;
    }
    cout << endl;

    set<int, std::greater<int>>
        Set = {1, 2, 5, 4, 3, 6, 1, 2, 3, 4, 5, 6}; // Decending
    // set<int, std::less<int>> Set = {1, 2, 3, 4, 5, 6, 1, 2, 3, 4, 5, 6}; //Accending

    cout << "SET 1 Example dealing numbers " << endl;

    for (const auto &e : Set)
    {
        cout << e << endl;
    }
}