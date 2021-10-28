#include "UQAC.h"
#include "dechet.h"
#include <random>

ChargementDechet::ChargementDechet(list<Dechet*>* listeDechets)
{
	int alea = 0 + (rand() % static_cast<int>(9 - 0 + 1));  /*génération d'un nombre aléatoire pour choisir un type de dechet à mettre dans la liste */

	string typedechet[10];

	typedechet[0] = "un carton";
	typedechet[1] = "un morceau de bois";
	typedechet[2] = "un bou de verre";
	typedechet[3] = "un rat mort";
	typedechet[4] = "une barre de fer";
	typedechet[5] = "un buste en bronze de Staline datant de 1940";
	typedechet[6] = "du canabis";
}