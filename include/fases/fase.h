#pragma once
//#include <SFML/Graphics.hpp>
#include "../listas/ListaEntidades.h"
#include "../gerenciadores/colisao.h"
#include "../entidades/personagens/jogadores/cacador.h"
#include "../entidades/personagens/jogadores/explorador.h"
#include "../gerenciadores/graficos.h"
#include "../entidades/obstaculos/espinho.h"
#include "../entidades/obstaculos/agua.h"
#include "../entidades/obstaculos/plataforma.h"
#include "../entidades/personagens/inimigos/abelha.h"
#include "../entidades/fundo.h"
#include "../entidades/personagens/inimigos/javali.h"
#include "../entidades/personagens/inimigos/caracol.h"
#include "../entidades/gosma.h"
#include <iostream>
#include"../entidades/obstaculos/pedra.h"

using namespace std;

namespace Fases {
	class Fase : public Ente {
	protected:
		bool doisJogadores;
	public:
		Gerenciadores::Graficos* pGG;
		Gerenciadores::GerenciadorColisoes* pGC;
		static Listas::ListaEntidades listaEst;
		static Listas::ListaEntidades listaMov;
		Cacador j1;
		Explorador e1;

		void fimFase();

		void set2jogadores(bool jog) { doisJogadores = jog; }
		bool get2jogadores() { return doisJogadores; }

		Fase(bool doisjogadores, Gerenciadores::Graficos* pgg, Gerenciadores::GerenciadorColisoes* pgc);
		~Fase();
		void atualizaView();
		void criafundo(bool dia);
		void criapedra();
		void criajavali();
		void criachao(bool vermelho);
		void finaliza();
		
		virtual void executar() = 0;
		virtual void colidir() = 0;
	};
}