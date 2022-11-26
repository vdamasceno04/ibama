#pragma once
#include <SFML/Graphics.hpp>
#include "florestaverde.h"
#include "florestavermelha.h"
#include "Menu.h"


using namespace Managers;

class Jogo
{
private:
	bool flagFase;
	int tela;
	FlorestaVerde fase1;
	FlorestaVermelha fase2;

	Menu menuPrincipal;
	Managers::Graphics* pGG;
	GerenciadorColisoes* pGC;

public:
	Jogo();
	~Jogo();
	void inicializar();
	void executar();
};