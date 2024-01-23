#include <iostream>
using namespace std;

struct Date {
    unsigned short int dd, mm, yy;
};


struct Person {
    char name[50];
    char surname[50];
    int age;
    Date date_of_birth;
};



int main()
{
    Person person_nr1 = { "Arkadiusz", "Waliczek", 47, {11,03,1976} };
    Person person_nr2 = { "Mariolka", "Waliczek", 18, {12,03,2006} };

    cout << person_nr1.name << " " << person_nr1.surname << " " << person_nr1.age << "yo Date of birth: " << person_nr1.date_of_birth.dd << "." << person_nr1.date_of_birth.mm << "." << person_nr1.date_of_birth.yy << "r" << endl;
    cout << person_nr2.name << " " << person_nr2.surname << " " << person_nr2.age << "yo Date of birth: " << person_nr2.date_of_birth.dd << "." << person_nr2.date_of_birth.mm << "." << person_nr2.date_of_birth.yy << "r" << endl;

    return EXIT_SUCCESS;

}
