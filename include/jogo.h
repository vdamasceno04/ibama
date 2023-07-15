#pragma once
//#include <SFML/Graphics.hpp>
#include"gerenciadores/gerenciadorevento.h"
#include"gerenciadores/gerenciadorestados/gerenciadorestados.h"

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