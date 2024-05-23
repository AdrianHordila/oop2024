// Problema 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Write a class in C++ that has the following definition:

class Canvas
{
    // add private data members
public:
    Canvas(int width,int height);
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
}

Organize the code in the following way:
- a header file called Canvas.h
- a cpp file called Canvas.cpp that contains the source code for class Canvas
- a main file called main.cpp that contains the main function and has an example on how to use Canvas. 
The example must include using all methods from the class.
- use a matrix of type char for the canvas. A pixel is a cell in the matrix. 
A pixel is considered empty if it contains the space (value 32) character.

For the DrawLine algorithm use Braseham algorithm.
*/

#include <iostream>
#include <chrono>
#include <thread>
#include "Canvas.h"

int main()
{
    using namespace std::this_thread;
    using namespace std::chrono;
    
    Canvas Canvas;
    Canvas.Clear();

    Canvas.DrawCircle(15, 15, 15, '*');
    Canvas.FillCircle(15, 15, 15, '-');
    Canvas.Print();
    sleep_for(seconds(5)); //mic delay ce permite admirarea fiecarui desen
    Canvas.Clear();

    Canvas.DrawRect(15, 15, 35, 35, '*');
    Canvas.FillRect(15, 16, 35, 35, '-');
    Canvas.Print();
    sleep_for(seconds(5));
    Canvas.Clear();

    ///imi pare rau =))
    Canvas.SetPoint(15, 35, '*');
    Canvas.SetPoint(40, 50, '*');
    Canvas.DrawLine(15, 35, 40, 50, '-');
    sleep_for(seconds(5));
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
