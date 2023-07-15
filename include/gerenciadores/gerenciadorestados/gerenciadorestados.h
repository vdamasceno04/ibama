#include<stack>
#include "../graficos.h"
#include"../../menus/MenuLeaderboard.h"
#include"../../menus/MenuEscolha.h"
#include"../../menus/MenuPrincipal.h"
#include"../../fases/florestaverde.h"
#include"../../fases/florestavermelha.h"

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
