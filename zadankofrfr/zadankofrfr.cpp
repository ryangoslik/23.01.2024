#include <iostream>
using namespace std;
 
struct Flaga {
	string kolory;
		unsigned int dd, mm, rr;
};
struct Panstwa {
	string nazwa;
	int ludnosc;
	int liczba_wojew;
	Flaga opis_flagi;
};



int main()
{
	int menu;
	cout << "panstwo1 panstwo2 panstwo3 panstwo4 panstwo5" << endl;
	cout << "wybierz 1 do 5    "; cin >> menu;
	Panstwa* wsk;
	Panstwa nr1 = { "Deutschland", 83200000, 16,{"czerwony,czarny i zolty",23, 05, 1949} };
	Panstwa nr2 = { "Polska", 39000000, 16,{"bialy i czerwnoy",01,8, 1919} };
	Panstwa nr3 = { "Czechy", 46746757, 16,{"niebieski,bialy i czerwony",17, 12, 1992} };
     Panstwa nr4 = { "usa", 34567676, 16,{"niebieski,bialy i czerwony",10, 03, 1777} };
    Panstwa nr5 = { "Francja", 6346746765, 16,{"niebieski,bialy i czerwony",10, 03, 1847} };
				  switch (menu)
	{
	case 1:
		
		cout << nr1.nazwa << " " << nr1.ludnosc << " " << nr1.liczba_wojew << " " << nr1.opis_flagi.kolory << " " << nr1.opis_flagi.dd << "." << nr1.opis_flagi.mm << "." << nr1.opis_flagi.rr << endl;
			break;
	
		  case 2:
			  
			  cout << nr2.nazwa << " " << nr2.ludnosc << " " << nr2.liczba_wojew << " " << nr2.opis_flagi.kolory << " " << nr2.opis_flagi.dd << "." << nr2.opis_flagi.mm << "." << nr2.opis_flagi.rr << endl;
			  break;
		  case 3:
			  
			  cout << nr3.nazwa << " " << nr3.ludnosc << " " << nr3.liczba_wojew << " " << nr3.opis_flagi.kolory << " " << nr3.opis_flagi.dd << "." << nr3.opis_flagi.mm << "." << nr3.opis_flagi.rr << endl;
			  break;
		  case 4:

			  cout << nr4.nazwa << " " << nr4.ludnosc << " " << nr4.liczba_wojew << " " << nr4.opis_flagi.kolory << " " << nr4.opis_flagi.dd << "." << nr4.opis_flagi.mm << "." << nr4.opis_flagi.rr << endl;
				  break;

		  case 5:
			  
			  cout << nr5.nazwa << " " << nr5.ludnosc << " " << nr5.liczba_wojew << " " << nr5.opis_flagi.kolory << " " << nr5.opis_flagi.dd << "." << nr5.opis_flagi.mm << "." << nr5.opis_flagi.rr << endl;
			  break;
	}


	return EXIT_SUCCESS;
}
