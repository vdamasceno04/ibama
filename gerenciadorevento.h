#pragma once
#include"graficos.h"

namespace Gerenciadores {
	class GerenciadorEstado;
	class GerenciadorEventos {
	protected:
		GerenciadorEventos();
	private:
		static GerenciadorEventos* pGerenciadorEventos;
		GerenciadorEstado* pGerenciadorEstado;
		Graficos* pGraficos;
		sf::Event evento;
	public:
		~GerenciadorEventos();
		static GerenciadorEventos* getInstance();
		void executar();
		bool TeclaSolta();
		bool TeclaPressionada();
		sf::Keyboard::Key QualTecla();
		void setPEstado(GerenciadorEstado* p);
		void setPGrafico(Graficos* p);
	};
}