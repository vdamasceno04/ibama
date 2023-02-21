#pragma once
#include "gerenciadorevento.h"
using namespace Gerenciadores;

GerenciadorEventos* GerenciadorEventos::pGerenciadorEventos = nullptr;

GerenciadorEventos::GerenciadorEventos() {
    pGerenciadorEstado = nullptr;
    pGraficos = nullptr;
}

GerenciadorEventos::~GerenciadorEventos() {
    if (pGerenciadorEventos)
        delete pGerenciadorEventos;
    pGerenciadorEventos = nullptr;
    if (pGraficos)
        delete pGraficos;
    pGraficos = nullptr;
}

GerenciadorEventos* GerenciadorEventos::getInstance() {
    if (pGerenciadorEventos == nullptr) {
        pGerenciadorEventos = new GerenciadorEventos();
    }
    return pGerenciadorEventos;
}

void GerenciadorEventos::setPEstado(GerenciadorEstado* p) {
    pGerenciadorEstado = p;
}

void GerenciadorEventos::setPGrafico(Graficos* p) {
    pGraficos = p;
}

void GerenciadorEventos::executar() {

    sf::Event evento;

    while (pGraficos->getWindow()->pollEvent(evento))
    {
        if (evento.type == sf::Event::KeyPressed) {
            TeclaPressionada(evento.key.code);
        }
        else if (evento.type == sf::Event::KeyReleased) {
            TeclaSolta(evento.key.code);
        }
        else if (evento.type == sf::Event::Closed)
            pGraficos->closeWindow();
    }
}

void GerenciadorEventos::TeclaSolta(sf::Keyboard::Key tecla) {
    if (pGerenciadorEstado->getEstadoAtual() == menuprincipal)
        cout << "menu";
    //tratar casos
}
void GerenciadorEventos::TeclaPressionada(sf::Keyboard::Key tecla) {
    //tratar casos
}
