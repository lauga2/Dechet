#include "dechet.h"
#include <string>

#include<iostream>



int Dechet::getPoids()
{
    return poids;
}
int Dechet::getId()
{
    return id;
}
string Dechet::getDescription()
{
    return description;
}
int Dechet::getType()
{
    return type;
}
string Dechet::getCouleur()
{
    return couleur;
}
Materiel getMateriel()
{
    return materiel;
}
int Dechet::getPurete()
{
    return purete;
}
bool Dechet::estEnStyromousse()
{
    return styromousse;
}
bool Dechet::estRigide()
{
    return rigide;
}
void Dechet::setPoids(int p)
{
    if(p<=100 && 0 <= p)
        poids = p;
}
void Dechet::setDescription(string d)
{ 
    if ((d.size()) >= 3)
        description = d;
    else
        description = "???";
}
void Dechet::setType(int t)
{
    if(t<=7 && 0 <= t)
        type = t;
}
void Dechet::setCouleur(string c)
{
    if (couleur == "Brun" || couleur == "Vert")
        couleur = c;
    else
        couleur = "Inconnue";
}
void Dechet::setPurete(int p)
{
    if (p <= 100 && 0 <= p)
        purete = p;
}
Dechet::Dechet()
{
   

}
Dechet::Dechet(int po, string de, int t, string c, Materiel M, int pu, bool st, bool ri)
{
    setPoids(po);
    setDescription(de);
    setType(t);
    setCouleur(c);
    setPurete(pu);
    styromousse = st;
    rigide = ri;
}
Dechet::Dechet(int po, string description)
{
    setPoids(po);
    setDescription(description);

}

RestantNouriture::RestantNouriture()
{

}

PlanteVerte::PlanteVerte()
{

}

Quelquechose::Quelquechose()
{

}

FeuillePapier::FeuillePapier()
{

}

BoiteCarton::BoiteCarton()
{

}

DechetMalConcu::DechetMalConcu()
{

}

BoureilleBiere::BoureilleBiere()
{

}

Chaise::Chaise()
{

}

SacChips::SacChips()
{

}

VerreCafe::VerreCafe()
{

}
