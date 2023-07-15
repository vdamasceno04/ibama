#pragma once
#include "../include/gerenciadores/gerenciadorevento.h"
#include "../include/gerenciadores/gerenciadorestados.h"
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
    while (pGraficos->getWindow()->pollEvent(evento))
    {
        TeclaPressionada();
        TeclaSolta();
        if (evento.type == sf::Event::Closed)
            pGraficos->closeWindow();
    }

}

bool GerenciadorEventos::TeclaSolta() {
    if (evento.type == sf::Event::KeyReleased) {
 //       cout << "sorto";
        return true;
    }
    return false;

}   

bool GerenciadorEventos::TeclaPressionada() {
     if (evento.type == sf::Event::KeyPressed){
 //       cout << "aperto";
        return true;
     }
     return false;
}

sf::Keyboard::Key GerenciadorEventos::QualTecla() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
        return sf::Keyboard::Escape;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
        return sf::Keyboard::Enter;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
    //    cout << "cima";
        return sf::Keyboard::Up;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){
   //     cout << "baixo";
        return sf::Keyboard::Down;
}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        return sf::Keyboard::Left;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        return sf::Keyboard::Right;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        return sf::Keyboard::A;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        return sf::Keyboard::D;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        return sf::Keyboard::W;

}
