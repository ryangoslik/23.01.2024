#include <iostream>
using namespace std;


struct Hobby {
	string nazwa, rodzaj, kierunek;
};
struct Osoba {
	char imie[50];
	char nazwisko[50];
	int wiek;
	Hobby mojeHobby;
};

int main()
{
	Osoba* wsk;

	Osoba o1 = { "Arkadiusz", "Waliczek",47,{"programowanie", "FRONTEND", "JS"} };
	Osoba o2 = { "Milosz", "Grucha",17,{"Kebab", "Gastronomia", "kuciak duzy misany"} };
	Osoba o3 = { "Mila", "Doganiecka",18,{"fryzierstwo", "mycie tlustch wlosow uczniow 2CT", "Head&Shoulders co."} };

	wsk = &o1;
	cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->mojeHobby.nazwa << " " << wsk->mojeHobby.rodzaj << " " << wsk->mojeHobby.kierunek << endl;

	wsk = &o2;
	cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->mojeHobby.nazwa << " " << wsk->mojeHobby.rodzaj << " " << wsk->mojeHobby.kierunek << endl;

	wsk = &o3;
	cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->wiek << " " << wsk->mojeHobby.nazwa << " " << wsk->mojeHobby.rodzaj << " " << wsk->mojeHobby.kierunek << endl;


	return EXIT_SUCCESS;
}
