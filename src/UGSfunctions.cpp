#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
#include "../include/UGSfunctions.h"
#include <iostream>
#include <SFML/Graphics.hpp>
//#include <windows.h>

sf::Sprite& UGSFunctions::create_SFsprite(std::string imagePath){
    sf::Texture* texture = new sf::Texture;
    texture->loadFromFile(imagePath);

    sf::Sprite* sprite = new sf::Sprite(*texture);
    return *sprite;
}

sf::Text& UGSFunctions::create_SFtext(std::string fontPath, int size, sf::Color color, std::string text){
    sf::Font* font = new sf::Font;
    font->loadFromFile(fontPath);

    sf::Text* t = new sf::Text;
    t->setFont(*font);
    t->setCharacterSize(size);
    t->setFillColor(color);
    t->setString(text);
    return *t;

}

bool UGSFunctions::key_pressed_winapi(int key){
    //return (GetAsyncKeyState(key) < 0);
    return false;
}


bool UGSFunctions::sprite_colision(sf::Sprite sprite1, sf::Sprite sprite2){
    return sprite1.getGlobalBounds().intersects(sprite2.getGlobalBounds());
}

bool UGSFunctions::mouseColision(sf::RectangleShape& sprite, sf::RenderWindow& window){
    sf::Vector2i mouse_pos      = sf::Mouse::getPosition(window);
    sf::Vector2f translated_pos = window.mapPixelToCoords(mouse_pos);
    if(sprite.getGlobalBounds().contains(translated_pos)){
        return true;
    } else {
        return false;
    }
}

bool UGSFunctions::mouseColision(sf::Sprite& sprite, sf::RenderWindow& window){
    sf::Vector2i mouse_pos      = sf::Mouse::getPosition(window);
    sf::Vector2f translated_pos = window.mapPixelToCoords(mouse_pos);
    if(sprite.getGlobalBounds().contains(translated_pos)){
        return true;
    } else {
        return false;
    }
}

sf::Music& UGSFunctions::create_SFmusic(std::string musicPath){
    sf::Music* music = new sf::Music;
    music->openFromFile(musicPath);

    return *music;
}

#endif // FUNCTIONS_H_INCLUDED
