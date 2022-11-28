#include"jogador.h"
#include"ListaEntidades.h"

#define COOLDOWN 30
#define DANO 3
#define ALCANCE 100
#define VIDA 20
Jogador::Jogador(sf::Vector2f pos) :
	Personagem::Personagem(pos)
{
	podeAtacar = true;
	setVida(VIDA);
	body.setSize(sf::Vector2f(45, 100));
	setEscala(sf::Vector2f(2, 2));
	setPosicao(pos);
	duracaoCooldown = COOLDOWN;
	dano = DANO;
	alcance = ALCANCE;
	vmax= sf::Vector2f(15.0, 25.0);
}

Jogador::~Jogador() {}

void Jogador::ataca()
{
	if (podeAtacar) {
		atacando = true;
		timerCooldown = 0;
		pGG->getClock().restart();
		timerCooldown += pGG->getClock().getElapsedTime().asSeconds();
	}
	else {
		atacando = false;
		pGG->getClock().restart();
		timerCooldown += pGG->getClock().getElapsedTime().asSeconds();
	}
	atualizapodeAtacar();

}