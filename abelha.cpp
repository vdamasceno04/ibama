#include "abelha.h"

Abelha::Abelha(sf::Vector2f pos, Jogador* p1, Jogador* p2, int v, int d, ID i) :
	Inimigo(pos, p1, p2, v, d, id) {
	id = i;
	vida = v;
	dano = d;
	setSprite("C:/Users/genti/Downloads/texturas/abelha2.png");
	body.setSize(sf::Vector2f(61, 56));
	setEscala(sf::Vector2f(2, 2));
	setPosicao(pos);
	dano = 1;
	velocidade = (sf::Vector2f(0.5, 0.5));
	alcance = 10;
	duracaoCooldown = 100.5;
	visao = 250;
}

Abelha::~Abelha() {}

void Abelha::executar() {
	hostilizar();
	remover();
	renderizar();
}

void Abelha::colidir(Entidade* pEnt, ID id) {
	sf::Vector2f posEnt2 = pEnt->getPosicao();
	int lado = 0;
	if (pEnt->getId() == plataforma)
	{
		//Colis�o por Cima
		if (lado == 0)
		{
			setPosicao(sf::Vector2f(sprite.getPosition().x, posEnt2.y - 120.0f));
			getBody().setPosition(sf::Vector2f(sprite.getPosition().x, posEnt2.y - 120.0f));
			sprite.setPosition(sf::Vector2f(sprite.getPosition().x, posEnt2.y - 120.0f));
		}
		/*
		//Colis�o por Baixo
		else if (lado == 1)
		{
			setPosition(sf::Vector2f(getPosition().x, posEnt2.y));
			getBody().setPosition(sf::Vector2f(getPosition().x, posEnt2.y));
			sprite.setPosition(sf::Vector2f(getPosition().x, posEnt2.y));
		}
		//Colis�o pela Direita
		else if (lado == 2)
		{
			setPosition(sf::Vector2f(pEnt2->getLadoEsquerdo(), getPosition().y));
			getBody().setPosition(sf::Vector2f(pEnt2->getLadoEsquerdo(), getPosition().y));
			sprite.setPosition(sf::Vector2f(pEnt2->getLadoEsquerdo(), getPosition().y));
		}
		//Colis�o pela Esquerda
		else if (lado == 3)
		{
			setPosition(sf::Vector2f(pEnt2->getLadoDireito(), getPosition().y));
			getBody().setPosition(sf::Vector2f(pEnt2->getLadoDireito(), getPosition().y));
			sprite.setPosition(sf::Vector2f(pEnt2->getLadoDireito(), getPosition().y));
		}
		*/
	}

}