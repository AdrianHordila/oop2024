#pragma once
class NumberList
{
    int numbers[10]; 
    // int *number; int size;
    // numbers = new int (p);
    // size = p;
    // count 0;
    // Verificare daca avem destula memorie? if(size == numbers) { copieaza elementele intr-un vector nou, mai mare (+1, dublare, nu conteaza),
    // apoi incrementeaza }
    // Tot ce declaram cu new trebuie sa dam delete la final
    // Heap nu stie sa stearga dupa => delete numbers;
    // delete[];
    int count;
public:
    void Init();          // count will be 0
    bool Add(int x);      // adds X to the numbers list and increase the data member count.
    // if count is bigger or equal to 10, the function will return false
    void Sort();          // will sort the numbers vector
    void Print();         // will print the current vector
};