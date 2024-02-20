/*#pragma once

#include"estado.h"

//Gerenciador
#include "../graphics.h"

//Fases
#include "../../fases/florestaverde.h"
#include "../../fases/florestavermelha.h"

//Jogador
#include "../../entidades/personagens/jogadores/jogador.h"

//Construtor
#include "construtorestado.h"

class EstadoJogar : public Estado {
private:
    Fases::Fase* fase;
public:
    EstadoJogar(const ID ID, Fases::Fase* fase);
    ~EstadoJogar();
    void executar();
};

*/