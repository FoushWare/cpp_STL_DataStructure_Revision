//* TOPIC: std::array

//* NOTICE:
//* 1. std::array is a container that encapsulates fixed size arrays.
//* 2. array size is needed at compile time.
//* 3. Assign by value is actually by value.
//* 4. Access Elements:
//*    a. at()
//*    b. []
//*    c. front()
//*    d. back()
//*    e. data() // gives access to the underlying array

#include <iostream>
#include <array>
using namespace std;

int main()
{
    // Declare
    std::array<int, 5> myarray;

    //Initialization
    std::array<int, 5>
        myarray = {1, 2, 3, 4, 5}; // initalizer list
    cout << "the number is " << myarray.at(4);

    std::array<int, 5> myarray2{1, 2, 3, 4, 5}; // uniform initalization

    // Assign using initalizer list
    std::array<int, 5> myarray;
    myarray = {1,
               2,
               3,
               4,
               5};

    return 0;
}