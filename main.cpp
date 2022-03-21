///**** OBSERVA��ES IMPORTANTES ****///
/*

 ** Algumas implementa��es de sprites, principalmente os que dizem respeito a instrumentos
      podem ter uma implementa��o aparentemente n�o eficiente. Mas isso n�o � verdade.
      a forma como foi implementado visa possibilitar o carregamento de sprites com texturas iguais,
      para que seja possivel instrumentos repetidos (ex.: Guitarra 1, Guitarra 2, etc).

*/


//#include <windows.h>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "include/UGSNotasConsecutivas.h"
#include "include/UGSRock.h"
#include "include/UGSMusicPlayer.h"
#include "include/UGSScoreMinor.h"
#include "include/UGSScoreMajor.h"
#include "include/UGSGameMajor.h"
#include "include/UGSMat.h"
#include "include/UGSfunctions.h"
#include "include/UGSScreenGame.h"
#include "include/UGSMenuMain.h"
#include "include/UGSMenuMainNovoJogo.h"
#include "include/UGSMenuMainNovoJogoStep2.h"

void screenMain(sf::RenderWindow& window){ /// menu principal

    sf::Texture textureClose;
    textureClose.loadFromFile("GUI/widgets/close.png");
    sf::Sprite spriteClose;
    spriteClose.setTexture(textureClose);
    spriteClose.setPosition(1310, 10);

    UGSFunctions functions;

    UGSMenuMain menuMain;


    sf::Event event;
    while (window.isOpen()){
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        menuMain.draw(window);

        if(functions.mouseColision(spriteClose, window)){
            spriteClose.setColor(sf::Color(255,255,255,255));
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                window.close();
            }
        } else {
            spriteClose.setColor(sf::Color(255,255,255,120));
        }
        window.draw(spriteClose);
        window.display();
    }

//    return 0;
}

int main()
{

    //openIntro();
    //return 0;

    sf::RenderWindow window(sf::VideoMode(1366, 766), "Ultimate Guitar Show 2", sf::Style::Defult);
    //window.setPosition(sf::Vector2i(0,0));
    window.setVerticalSyncEnabled(true);

    sf::Texture textureClose;
    textureClose.loadFromFile("GUI/widgets/close.png");
    sf::Sprite spriteClose;
    spriteClose.setTexture(textureClose);
    spriteClose.setPosition(1310, 10);

    UGSFunctions functions;

    UGSMenuMain menuMain;


    sf::Event event;
    while (window.isOpen()){
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        menuMain.draw(window);

        if(functions.mouseColision(spriteClose, window)){
            spriteClose.setColor(sf::Color(255,255,255,255));
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                window.close();
            }
        } else {
            spriteClose.setColor(sf::Color(255,255,255,120));
        }
        window.draw(spriteClose);
        window.display();
    }

    return 0;
}

