#include"fase.h"

class FlorestaVerde : public Fase {

public:
	FlorestaVerde(Managers::Graphics* pG);
	~FlorestaVerde();
	void criafundo();
	void criachao();
	void criaespinho();
	void criajavali();
	void criaagua();
	void criaabelhas();
	void inicializar();
	void executar();

};