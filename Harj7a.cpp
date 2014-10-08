#include <iostream>
using namespace std;
void main (void)
{
	int paino, pituus;
	char nimi[30], osoite[30];

	cout << "Anna nimesi : ";
	cin >> nimi;
	cin.get();

	cout << "Anna pituutesi sentteinä : ";
	cin >> pituus;
	cin.get();
	
	cout << "Anna osoitteesi : ";
	cin >> osoite;
	cin.get();

	cout << "Anna painosi : ";
	cin >> paino;
	cin.get();

	cout << "\nArvoisa " << nimi << endl;
	cout << "Osoitteesi on "<< osoite << endl;
	cout << "Nykyinen painosi " << paino <<endl;
	cout << "Ihanne painosi" << (pituus - 100) << " kg"<< endl;
	cout << "Erotus "<< (paino - (pituus - 100)) << " kg" <<endl;
}


