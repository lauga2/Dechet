#pragma once
#include "dechet.h"
#include <list>

class UQAC
{
public:
	UQAC();
	~UQAC();
	ChargementDechet* getChargementDechets();
};

class ChargementDechet : public Dechet
{
private:
	Dechet* listeDechets;

public:
	ChargementDechet(list<Dechet*>* listeDechets);
	~ChargementDechet();
	Dechet* getDechet();
};