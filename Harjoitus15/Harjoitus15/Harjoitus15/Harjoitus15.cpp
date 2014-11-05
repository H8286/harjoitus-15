/*Harjoitus 15
Versio 1.0
Sami Liimatainen
IIO14S1
4.11.2014

TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!

Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
pitkän merkkijonon (ei välilyäntejä).
a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
(tulostus tyyppiä "cout << mjono1[4];" jne)
b) Ohjelma kääntää annetun merkkijonon toiseen
merkkijonoon ja tulostaa sen näytälle
(tulostus tyyppiä "cout << mjono2;")
c) merkkijono voi olla kuinka pitkä
tahansa (max 100 kirjainta).
Syätetyn merkkijonon pituutta ei saa
laskea millään kirjastofunktiolla
(esim. lenght tms.) Ohjelma
tutkii onko annettu merkkijono
palindromi ja ilmoittaa sen käyttäjälle.
Välilyännit jonossa ovat sallittuja.

Käyttäjä syättää jonon: ABC_Kissa_kavelee
ohjelma tulostaa: eelevak_assiK_CBA

*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	
	//A
	char JONO[18];
	cout << "Anna 17 merkkia pitka merkkijono: ";
	cin >> JONO;

	cout << JONO << endl;
	cout << JONO[16] << JONO[15] << JONO[14] << JONO[13] << JONO[12] << JONO[11] << JONO[10] << JONO[9] << JONO[8] << JONO[7] << JONO[6] << JONO[5] << JONO[4] << JONO[3] << JONO[2] << JONO[1] << JONO[0];
	cout << endl;

	/*
	//A2
	cout << JONO << endl;
	int ind;
	for (ind = 16; ind >= 0; ind--)
	{
	cout << JONO[ind];
	}
	cout << endl << endl;
	*/

	//B
	char JONO2[18];
	JONO2[17] = '\0';
	int loop = 16;
	int loop2 = 0;
	while (loop >= 0)
	{
		JONO2[loop2] = JONO[loop];
		loop--;
		loop2++;
	}
	cout << JONO2;

	/*
	//B2
	char mjono2[17 + 1];
	int i, j;
	for (i = 0, j = 16; j >= 0; i++, j--)
	mjono2[i] = JONO[j];
	mjono2[i] = '\0';
	cout << mjono2;
	*/


	//C
	cout << endl << endl;
	char palindromi[101];
	int palindromimerkki;
	int ind;
	cin.get();
	cout << "Anna Max 100 merkkia pitka merkkijono: ";
	cin.getline(palindromi, 101);

	cout << palindromi;

	for (ind = 99; ind >= 0; ind--)
	{
		if (palindromi[ind] != 'Ì') //ì:n löysin debuggerin avulla, tämä merkki on taulukossa \0 merkin jälkeisissä ruuduissa.
		{

			if (palindromi[ind] != '\0')
			{
				cout << palindromi[ind];
			}

			else
			{
				palindromimerkki = ind;
				ind = 0;
			}
		}
	}
	cout << endl << "Merkkeja oli: " << palindromimerkki <<endl;

	char palindromi2[101];
	palindromi2[palindromimerkki] = '\0';

	int loop3 = palindromimerkki-1;
	int loop4 = 0;
	while (loop3 >= 0)
	{
		palindromi2[loop3] = palindromi[loop4];
		loop3--;
		loop4++;
	}

	for (ind = 99; ind >= 0; ind--)
	{
		if (palindromi2[ind] != 'Ì')
		{

			if (palindromi2[ind] != '\0')
			{
				cout << palindromi2[ind];
			}

			else
			{
				ind = 0;
			}
		}
	}

	if (strcmp(palindromi, palindromi2) == 0)
	cout << "Palindromi" << endl;
	else
	cout << "Ei palindromi" << endl;

}	
