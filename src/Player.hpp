/*
** Felix Schrynemaekers Project
** ProceduralX
** File description:
** Player   
*/

#pragma once
#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <vector>

class Player {
public:
    Player();
    ~Player();

    void init(SDL_Renderer* renderer, float x, float y);
    void move(float x, float y);
    void moveX(float x);
    void moveY(float y);
    float getPosX() const;
    float getPosY() const;
    void render(SDL_Renderer* renderer);

private:
    SDL_Texture* loadTexture(const char* filepath, SDL_Renderer* renderer);
    float _posX;
    float _posY;
    std::vector<SDL_Texture*> _hidelTextures;
    std::vector<SDL_Texture*> _moveTextures;
    bool _isMoving;
    int _textureIndex;
};
