#include<stack>
#include "graficos.h"
#include"MenuLeaderboard.h"
#include"MenuEscolha.h"
#include"MenuPrincipal.h"
#include"florestaverde.h"
#include"florestavermelha.h"

namespace Gerenciadores {
    class GerenciadorEstado {
    protected:
        GerenciadorEstado();

    private:
        std::stack<Ente*> pilhaEstados;

        //padr�o de projeto singleton
        static GerenciadorEstado* pGerenciadorEstado;
    public:
        ~GerenciadorEstado();
        static GerenciadorEstado* getGerenciadorEstado();
        void executar();
        Ente* criaestado(const ID id);
        void addEstado(const ID id);
        void removerEstado();
        int getEstadoAtual();
        int tamanhoPilha();
    };
}
