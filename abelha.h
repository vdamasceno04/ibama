#include "inimigo.h"

class Abelha : public Inimigo {
private:

public:
	Abelha(sf::Vector2f pos, Jogador* p1, Jogador* p2, ID i = ID::abelha);
	~Abelha();
	void executar();
};