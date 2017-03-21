#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

void sortujMal()
{
   ifstream liczby("liczby.txt");
   ofstream liczby_mal("liczby_mal.txt");
   int liczby_ilosc = 28;
   int liczba;

   for(int i = 0; i < liczby_ilosc; ++i)
   {
       liczby >> liczba;
       printf("%d\n", liczba);
   }


}

int main()
{
    sortujMal();
    return 0;
}
