#pragma once
#include "ente.h"

Ente::Ente() {
	id = -1;
	pGG = NULL;
}

Ente::~Ente() { pGG = NULL; }

void Ente::setpGG(Managers::Graphics* p) { pGG = p; }

