#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

class liczby622
{
                vector <int> tablica_liczb;
       			vector <int> tablica_liczb8;
        public:
                void wprowadz();
                void wypisz();
                int obliczanie();
                int sprawdzenie(int x, int y);
                int zapiszDoPliku(const char *);             
};

void liczby622::wprowadz()
{

		fstream plik;  
        int wprowadzany;
        plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 62.4\\liczby2.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                	plik >> wprowadzany;
                	tablica_liczb.push_back(wprowadzany);
                   }
                   plik.close();   
                
				
		plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 62.4\\liczby2.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                	plik >> wprowadzany;
                	tablica_liczb8.push_back(wprowadzany);
                   }
                   plik.close();  
        			
}


void liczby622::wypisz()
{
		for (int i = 0; i < tablica_liczb.size(); i++)
		{
			cout << tablica_liczb[i] << "\n";
		}
}

//Eryk Kucharski
int liczby622::obliczanie()
{
	int dec6 = 0, oct6 = 0;
	int liczba;
	for (int i = 0; i <= tablica_liczb.size(); i++) 
	{
		liczba = tablica_liczb[i];
		while (liczba) 
		{
		    if (liczba % 10 == 6) 
			{
				dec6++;
			}
			liczba /= 10;
		}
	}
	int liczba_oct;
	for (int i = 0; i <= tablica_liczb8.size(); i++)
	{
		liczba_oct = tablica_liczb8[i];
		while (liczba_oct) 
		{
		    if (tablica_liczb8[i] % 8 == 6)
			{
				oct6++;
			} 
		    liczba_oct /= 8;
		}
	}
	
		

  	cout << dec6 << " " << oct6 << endl;
}


int liczby622::zapiszDoPliku(const char *nazwa)
{	
        ofstream plik;
        plik.open(nazwa);
//    	plik << "Pierwsza liczba ci¹gu: " << max_liczba;
//    	plik << "\nD³ugoœæ ci¹gu: " << max;
        plik.close();
        
}



int main()
{
//Eryk Kucharski
	liczby622 x;
    x.wprowadz();
//    x.wypisz();
    x.obliczanie();
    x.zapiszDoPliku("B:\\Programowanie z Panem Fulaa\\Zadanie Mat. 62.4\\wynik.txt");
    return 0;
}
