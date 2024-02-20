#pragma once
//#include <SFML/Graphics.hpp>
#include"gerenciadores/gerenciadorevento.h"
#include"gerenciadores/gerenciadorestados/gerenciadorestados.h"
#include"gerenciadores/input.h"

using namespace Gerenciadores;


class Jogo
{
private:
	GerenciadorEventos* pGV;
	Graficos* pGG;
	GerenciadorColisoes* pGC;
	GerenciadorEstado* pGE;
	Input* pGI;

public:
	Jogo();
	~Jogo();
	void executar();
};