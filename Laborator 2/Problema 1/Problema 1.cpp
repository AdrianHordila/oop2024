// Problema 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Write a class in C++ that has the following definition:

class NumberList
{
    int numbers[10];
    int count;
public:
    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.
                          // if count is bigger or equal to 10, the function will return false
    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector

}

Organize the code in the following way:
- a header file called NumberList.h
- a cpp file called NumberList.cpp that contains the source code for class NumberList
- a main file called main.cpp that contains the main function and has an example on how to use NumberList.
The example must include using all methods from the class.
- make sure that precompile headers are NOT used (for Visual Studio setup).
*/

#include <iostream>
#include "NumberList.h"

using namespace std;

int main()
{
    NumberList vector;
    int x[10], length;
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> x[i];
    }
    vector.Init();
    for (int i = 0; i < length; i++)
    {
        vector.Add(x[i]);
    }
    vector.Sort();
    vector.Print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
