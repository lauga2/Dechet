
#pragma once
#include <string>

#include<iostream>

using namespace std;
typedef enum Materiel Materiel;

class Dechet
{
private:
	int poids;
	int id;
	string  description;
	int type;
	string couleur;
	
	enum Materiel 
	{
		CARTON, BOUTEILLE, PLASTIQUE, METAL, BOIS, NOURRITURE, VEGETAL, PAPIER, STYROFOAM, INCONNUE
	};
	Materiel materiel;
	int purete;
	bool styromousse;
	bool rigide;
	int idCourant;
	void setPoids(int);
	void setDescription(string);
	void setType(int);
	void setCouleur(string);
	void setPurete(int);
    
public:
	int getPoids();
	int getId();
	string getDescription();
	int getType();
	string getCouleur();
	Materiel getMateriel();
	int getPurete();
	bool estEnStyromousse();
	bool estRigide();
	Dechet();
	//friend ostream& operator << (ostream* out, Dechet const* dechet);

	friend ostream & operator <<(ostream& out, Dechet const& dechet)
	{
		out << dechet.poids << endl;
		out << dechet.id << endl;
		out << dechet.description << endl;
		out << dechet.type << endl;
		out << dechet.couleur << endl;
		out << dechet.materiel << endl;
		out << dechet.purete << endl;
		out << dechet.styromousse << endl;
		out << dechet.rigide << endl;
		out << dechet.idCourant << endl;
		return out;
	}

protected:
	Dechet(int,string,int,string,Materiel,int,bool,bool);
	Dechet(int,string);
	
};
class RestantNouriture : public Dechet
{
public:
	RestantNouriture();
};
class PlanteVerte : public Dechet
{
public:
	PlanteVerte();
};
class Quelquechose : public Dechet
{
public:
	Quelquechose();
};
class FeuillePapier : public Dechet
{
public:
	FeuillePapier();
	
};

class BoiteCarton : public Dechet
{
public:
	BoiteCarton();
};
class DechetMalConcu : public Dechet
{
public:
	DechetMalConcu();
};
class BoureilleBiere : public Dechet
{
public:
	BoureilleBiere();
};
class Chaise : public Dechet
{
public:
	Chaise();
};
class SacChips : public Dechet
{
public:
	SacChips();
};
class VerreCafe : public Dechet
{
public:
	VerreCafe();
};
