#pragma once
#include"inimigo.h"
#include <string>

class ListaEntidades;

class Jogador : public Personagem {
private:

public:
	Jogador(sf::Vector2f pos, ID i);
	~Jogador();
	virtual void executar() = 0;
	virtual void controlar() = 0;
	void ataca();

	virtual void colidir(Entidade* pEnt, ID id) { }
};