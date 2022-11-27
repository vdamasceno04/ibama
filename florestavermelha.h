#pragma once
#include"fase.h"

namespace Fases {

	class FlorestaVermelha : public Fase {

	public:
		FlorestaVermelha(bool doisJogadores, Managers::Graphics* pG, Managers::GerenciadorColisoes* pC);
		~FlorestaVermelha();
		void criacaracol();
		void criaespinho();
		void inicializar();
		void executar();
		void colidir();
	};
}