#pragma once
#include <SFML/Graphics.hpp>
#include"gerenciadorevento.h"
#include "florestaverde.h"
#include "florestavermelha.h"
#include "MenuPrincipal.h"
#include "MenuInterno.h"


using namespace Gerenciadores;


class Jogo
{
private:
	GerenciadorEventos* pGV;
	Graficos* pGG;
	GerenciadorColisoes* pGC;
	GerenciadorEstado* pGE;

public:
	Jogo();
	~Jogo();
	void executar();
};