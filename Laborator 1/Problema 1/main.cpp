#include <iostream>
#include <cstring>

/*
Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers that are found on each line of the file in.txt.
To open the file use fopen API.
Write your own function that converts a string to a number (similar cu atoi API).
To print something to the screen, use the printf API.

Example: let's consider the following "ini.txt" file:

   			 123

   			 198698

   			 5009

   			 983279

The program will print to the screen 1187109.
*/

using namespace std;

int main()
{
    FILE *citire;
    char numar[100];
    int nr_convertit=0, suma=0;
    citire=fopen("in.txt","r");
    while(fgets(numar, sizeof(numar), citire)!=NULL)
    {
        nr_convertit=0;
        for(int i=0; i<strlen(numar); i++)
        {
            if(numar[i]=='0')
            {
                nr_convertit=nr_convertit*10;
            }
            if(numar[i]=='1')
            {
                nr_convertit=nr_convertit*10+1;
            }
            if(numar[i]=='2')
            {
                nr_convertit=nr_convertit*10+2;
            }
            if(numar[i]=='3')
            {
                nr_convertit=nr_convertit*10+3;
            }
            if(numar[i]=='4')
            {
                nr_convertit=nr_convertit*10+4;
            }
            if(numar[i]=='5')
            {
                nr_convertit=nr_convertit*10+5;
            }
            if(numar[i]=='6')
            {
                nr_convertit=nr_convertit*10+6;
            }
            if(numar[i]=='7')
            {
                nr_convertit=nr_convertit*10+7;
            }
            if(numar[i]=='8')
            {
                nr_convertit=nr_convertit*10+8;
            }
            if(numar[i]=='9')
            {
                nr_convertit=nr_convertit*10+9;
            }
        }
        suma=suma+nr_convertit;
    }
    printf("%d", suma);
    fclose(citire);
    return 0;
}
