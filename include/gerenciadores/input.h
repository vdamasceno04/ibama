#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#include<map>

using namespace std;

namespace Gerenciadores{

    class Input{
    protected: 
        Input();

    private:
        std::map<sf::Keyboard::Key, std::string> keyMap;
        static Gerenciadores::Input* instance;
    public:
        ~Input();
        static Input* getInstance();
        static void apagarInstance();
        
        void isPressed();
    };
}