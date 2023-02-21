#pragma once
#include "gerenciadorestados.h"

namespace Gerenciadores {
	class GerenciadorEventos {
	protected:
		GerenciadorEventos();
	private:
		static GerenciadorEventos* pGerenciadorEventos;
		GerenciadorEstado* pGerenciadorEstado;
		Graficos* pGraficos;
	public:
		~GerenciadorEventos();
		static GerenciadorEventos* getInstance();
		void executar();
		void TeclaSolta(sf::Keyboard::Key tecla);
		void TeclaPressionada(sf::Keyboard::Key tecla);
		void setPEstado(GerenciadorEstado* p);
		void setPGrafico(Graficos* p);
	};
}