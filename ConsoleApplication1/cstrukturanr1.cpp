#include <iostream>
using namespace std;



struct Person {
    char name[50];
    char surname[50];
    int age;
};



int main()
{
    Person person_nr1 = { "Arkadiusz", "Waliczek", 47 };
    Person person_nr2 = { "Mariolka", "Waliczek", 18 };

    cout << person_nr1.name << " " << person_nr1.surname << " " << person_nr1.age << endl;
    cout << person_nr2.name << " " << person_nr2.surname << " " << person_nr2.age << endl;

    return EXIT_SUCCESS;

}
