#include <iostream>

using namespace std;

int main()
{
    string vardas;
    int lytis = 0;
    int ilgis = 0;
    cout << "Lytis: 1 - Moteris, 2 - Vyras" << endl;
    cin >> lytis;
    cout << "Áveskite savo vardà: ";
    cin >> vardas;
    cout << endl;
    ilgis = vardas.length();
    if(lytis == 1)
        ilgis += 13;
    else
        ilgis += 14;
    for(int i = 0; i < ilgis; i++)
        cout << "*";
    cout << endl << "*";
    for(int i = 0; i < ilgis-2; i++)
        cout << " ";
    cout << "*" << endl << "* ";
    if(lytis == 1)
        cout << "Sveika, ";
    else
        cout << "Sveikas, ";
    cout << vardas << "! *" << endl << "*";
    for(int i = 0; i < ilgis-2; i++)
        cout << " ";
    cout << "*" << endl;
    for(int i = 0; i < ilgis; i++)
        cout << "*";

}
