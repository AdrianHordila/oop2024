// Problema 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Design a C++ class (following the previous problem) that reflects the properties of a student. The class should include the following:

- methods to set and get the name of the student
- methods to set and get the grade for mathematics (a grade must be a float value from 1 to 10)
- methods to set and get the grade for English (a grade must be a float value from 1 to 10)
- methods to set and get the grade for History (a grade must be a float value from 1 to 10)
- a method that retrieves the average grade
- 5 global functions that compares two students in terms of name, grades, average. 
If two students are equal the return value of such a function will be 0.
If the first student is bigger than the second one, the return value will be 1, otherwise -1.

Make sure that you have the following:
- a header file for the class
- a cpp file for the methods specific to the class
- a header file for the global functions
- a cpp file for the global functions implementation
- a main.cpp file that shows how the methods and global functions can be used.
*/

#include <iostream>
#include <cstring>

#include "Class.h"
#include "Class.cpp"
#include "Functions.h"
#include "Functions.cpp"

using namespace std;

int main()
{
    Student students[2];

    char name1[256], name2[256];
    cin.getline(name1, 256);
    cin.getline(name2, 256);

    int grade_math[2], grade_engl[2], grade_hist[2];
    cin >> grade_math[0] >> grade_math[1];
    cin >> grade_engl[0] >> grade_engl[1];
    cin >> grade_hist[0] >> grade_hist[1];

    students[0].Set_Name(name1);
    students[0].Set_Grade_Math(grade_math[0]);
    students[0].Set_Grade_Engl(grade_engl[0]);
    students[0].Set_Grade_Hist(grade_hist[0]);
    int average1 = students[0].Average_Grade();

    students[1].Set_Name(name1);
    students[1].Set_Grade_Math(grade_math[1]);
    students[1].Set_Grade_Engl(grade_engl[1]);
    students[1].Set_Grade_Hist(grade_hist[1]);
    int average2 = students[1].Average_Grade();

    int maxim[3];
    Bigger(maxim, students);
    Result(maxim);
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
