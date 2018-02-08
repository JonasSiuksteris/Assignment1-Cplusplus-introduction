#include <iostream>

using namespace std;

int main()
{
    string vardas;
    int lytis = 0;
    cout << "Lytis: 0 - Vyras. 1 - Moteris" << endl;
    cin >> lytis;
    cout << "Áveskite savo vardà: ";
    cin >> vardas;
    cout << endl;
    for(int i = 0; i < vardas.length()+14-lytis; i++)
        cout << "*";
    cout << endl << "*";
    for(int i = 0; i < vardas.length()+12-lytis; i++)
        cout << " ";
    cout << "*" << endl << "* ";
    if(lytis == 1)
        cout << "Sveika, ";
    else
        cout << "Sveikas, ";
    cout << vardas << "! *" << endl << "*";
    for(int i = 0; i < vardas.length()+12-lytis; i++)
        cout << " ";
    cout << "*" << endl;
    for(int i = 0; i < vardas.length()+14-lytis; i++)
        cout << "*";

}
