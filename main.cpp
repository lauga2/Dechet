#include "dechet.h"
#include <string>
#include <iostream>
#include "UQAC.h"

int main()
{
	laboratoire2();
	afficherInformation();
	return 0;
}

void laboratoire2()
{
	ChargementDechet* chargement = UQAC::getChargemnent();
	UsineTraitement* usineTraitement = new UsineTraitement();
	GenerateurSequenceOperation gso;
	usineTraitement->chargerOperations(gso.genrerSequence(0, usineTraitement));
	usineTraitement->demarerTraitement(chargement);
	delete usineTraitement;
}

void afficherInformation()
{
	cout << endl << endl;
	cout << endl << "-----------------------------------------" << endl << "NB construteurs    :" << Compteur::getNbConstructeurs() << endl << "NB constructeurs copie   :" << Compteur::getNbConstructeursCopie() << endl << "NB destructeurs   :" << Compteur::getNbDestructeurs() << endl;
	cin.get();

}