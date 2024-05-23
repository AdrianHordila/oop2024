#include <iostream>
#include <cstring>

/*
Read a sentence from the input using scanf API.
Then sort split it into words and write to the screen (using the printf API) the words sorted (from the longest one to the shortest one).
If two words have the same length - they will be sorted out alphabetically.
We consider that each word is separated from another one using space (one or multiple).

Example: let's consider the following sentence: "I went to the library yesterday". The program will print the following to the screen:

   			 yesterday

   			 library

   			 went

   			 the

   			 to

   			 I
*/

using namespace std;

int main()
{
    char cuvinte[256][256], sir[256], *p;
    int nr=0;
    scanf("%[^\n]", sir);
    p=strtok(sir, " ");
    while(p!=NULL)
    {
        strcpy(cuvinte[nr], p);
        nr++;
        p=strtok(NULL, " ");
    }
    for(int i=0; i<nr-1; i++)
    {
        for(int j=i+1; j<nr; j++)
        {
            if(strlen(cuvinte[i])<strlen(cuvinte[j])) ///ordoneaza descrescator dupa lungimea sirului
            {
                swap(cuvinte[i], cuvinte[j]);
            }
            if(strlen(cuvinte[i])==strlen(cuvinte[j])) ///cazul cand doua cuvinte au aceeasi lungime
            {
                if(strcmp(cuvinte[i], cuvinte[j])>0) ///daca nu sunt ordonate alfabetic
                {
                    swap(cuvinte[i], cuvinte[j]);
                }
            }
        }
    }
    for(int i=0; i<nr; i++)
    {
        printf("%s \n", cuvinte[i]);
    }
    return 0;
}
