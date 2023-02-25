#pragma once
#include <SFML/Graphics.hpp>
#include"gerenciadorevento.h"
#include"gerenciadorestados.h"

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