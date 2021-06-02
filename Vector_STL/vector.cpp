//! TOPIC: std::vector

//* NOTES:
// * 1. std::vector is a sequence container and also known as Dynamic Array or Array List.
// *2. Its size can grow and shrink dynamically, and no need to provide size at compile time.

//* ELEMENT ACCESS
//* at(), [], front(), back(), data()

//* MODIFIERS:
//* insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

//? The vector::emplace() is an STL in C++ which extends container by
//? inserting new element at position.

// C++ program to illustrate the
// vector::emplace() function
// insertion at thefront

//? #include <bits/stdc++.h>
//? using namespace std;

//? int main()
//? {
//?     vector<int> vec = { 10, 20, 30 };

//?     // insert element by emplace function
//?     // at front
//?     auto it = vec.emplace(vec.begin(), 15);

// ?    // print the elements of the vector
//? cout << "The vector elements are: ";
//?     for (auto it = vec.begin(); it != vec.end(); ++it)
//?         cout << *it << " ";

//?     return 0;
//? }

//# Output:
//# The vector elements are: 15 10 20 30

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declarations
    std::vector<int> arr1;
    std::vector<int> arr2(5, 20);            // (size,default_value)
    std::vector<int> arr3 = {1, 2, 3, 4, 5}; // initiazer list
    std::vector<int> arr4{1, 2, 3, 4, 5};    // uniform initialization

    // Accessing Elements
    arr2[3] = 10;    // Exception save [if the array of size 3 it will increase the array size to fit your order foushware :) ]
    arr2.at(3) = 10; // not exception save [if place 3 is out of boundary means the array is array of size 3 ]
}
