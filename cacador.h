#include"jogador.h"

class ListaEntidades;

class Cacador : public Jogador {
private:

public:
	Cacador(sf::Vector2f pos = sf::Vector2f(500, HEIGHT * 0.635));
	~Cacador();
	void controlar();
	void executar();
};