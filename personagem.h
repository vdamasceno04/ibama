#pragma once
#include "entidade.h"

class Personagem : public Entidades::Entidade {
protected:
	int vida;
	sf::Vector2f velocidade;
	bool atacando;
	bool atacou;
	int dano;
	float alcance;
	bool podeAtacar;
	float timerAtaque;
	float duracaoCooldown;
	float timerCooldown;
	void setVelocidade(sf::Vector2f vel);
	sf::Vector2f getVelocidade();
	float duracaoAtaque;
	bool olhaDireita;

public:
	Personagem(sf::Vector2f pos);
	~Personagem();
	virtual void executar() = 0;
	void setVida(int v);
	int getVida();
	void tomaDano(int ferimento);
	bool morreu();
	void setOlhar(bool direita);
	bool getOlharDireita();
	void contaTempoAtaque(const float dt);
	void atualizapodeAtacar();
	float distanciaPersonagens(Personagem* pP);
	bool acertaAtaque(Personagem* p);
	void remover();
};