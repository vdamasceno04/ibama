#include "../include/fases/fase.h"

Fases::Fase::Fase(bool doisjogadores, Gerenciadores::Graficos* pG, Gerenciadores::GerenciadorColisoes* pC) :
   j1(), pGC(Gerenciadores::GerenciadorColisoes::getInstancia(&listaMov, &listaEst))
{
    pGG = pG;
    pGC = pC;
    estado = 0;
}

Listas::ListaEntidades Fases::Fase::listaEst;
Listas::ListaEntidades Fases::Fase::listaMov;

Fases::Fase::~Fase() {
    int i;
    for(i=0; i<listaEst.getLen(); i++)
        delete listaEst.getItem(i);
    for (i = 0; i < listaMov.getLen(); i++)
        delete listaMov.getItem(i);
}

void Fases::Fase::criafundo(bool dia)
{
    int i;
    int pos = 0;
    Fundo* pAux;
    for (i = 0; i < 8; i++) {
        pAux = new Fundo(Math::CoordF(pos, 0), dia);
        listaEst.addEntidade(pAux);
        pos += WIDTH - 2;
    }
}

void Fases::Fase::criapedra()
{
    int i;
    int sorteia;
    int pos = 900;
    Pedra* pAux;
    srand(time(NULL));
    for (i = 0; i < 10; i++) {
        sorteia = rand() % 2;
        if (sorteia == 0 || i % 2 == 0) {
            pAux = new Pedra(Math::CoordF(pos, HEIGHT * 0.7));
            listaEst.addEntidade(pAux);
        }
        pos += 500;
    }
}

void Fases::Fase::criajavali() {
    int i;
    int pos = WIDTH * 6 - WIDTH / 3;
    int idade;
    int sorteia;
    Javali* pAux;
    srand(time(NULL));
    for (i = 0; i < 6; i++) {
        sorteia = rand() % 2;
        if (sorteia == 0 || i % 2 == 0) {
            idade = (rand() % 8) + 2;
            pAux = new Javali(Math::CoordF(pos, HEIGHT * 0.64), &j1, &e1, idade);
            listaMov.addEntidade(pAux);
        }
        pos += 220;
    }
}

void Fases::Fase::fimFase() {
    bool fim = false;
    bool jogadorvivo = false;
    bool javalivivo = false;
    int i;
    ID id;
    for (i = 0; i < listaMov.getLen(); i++)
    {
        id = listaMov.getItem(i)->getId();
        if (id == 1 || id == 2)
            jogadorvivo = true;
        else if (id == 7)
            javalivivo = true;
    }
    if (!jogadorvivo) {
        fim = true;
        Ente::operator-=(Ente::getPontuacao());
    }
    if (!javalivivo) {
        fim = true;
     /*   Ente::operator+=(400);
        if (doisJogadores) 
            Ente::setPontos(j1.getVida() * 1000);
        Ente::setPontos(e1.getVida() * 1000);*/

    }
    if (fim) {//deletando jogador quando ele morre?
        estado = -1;
        for (i = 0; i < listaMov.getLen(); i++)
        {
            if (listaMov.getItem(i)->getId() != 1 || listaMov.getItem(i)->getId() != 2) {
                delete listaMov.getItem(i);
            }
        }
        for (i = 0; i < listaEst.getLen(); i++)
        {
            delete listaEst.getItem(i);
        }
        listaEst.limpaLista();
        listaMov.limpaLista();
        pGG->centerView(Math::CoordF(WIDTH / 2, HEIGHT / 2));
    }
}

void Fases::Fase::finaliza() {
    j1.resetar();
    e1.resetar();
    pGG->centerView(Math::CoordF(WIDTH / 2, HEIGHT / 2));
}

void Fases::Fase::criachao(bool vermelho)
{
    int i;
    int pos = 0;
    Plataforma* pAux;
    for (i = 0; i < 121; i++) {
        pAux = new Plataforma(Math::CoordF(pos, HEIGHT * 6 / 7), vermelho);
        listaEst.addEntidade(pAux);
        pos += 71;
    }
}

void Fases::Fase::atualizaView() {
    if (j1.getBody().getPosition().x >= pGG->getView().x)
        pGG->centerView(Math::CoordF(j1.getBody().getPosition().x, HEIGHT / 2));
    if (e1.getBody().getPosition().x >= pGG->getView().x)
        pGG->centerView(Math::CoordF(e1.getBody().getPosition().x, HEIGHT / 2));
    if (j1.getBody().getPosition().x >= (WIDTH * 8 - WIDTH / 2) || e1.getBody().getPosition().x >= (WIDTH * 8 - WIDTH / 2))
        pGG->centerView(Math::CoordF(WIDTH * 8 - WIDTH / 1.9, HEIGHT / 2));
}