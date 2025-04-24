/*
** Felix Schrynemaekers Project
** ProceduralX
** File description:
** Player   
*/

#include "Player.hpp"

Player::Player()
    : _posX(0), _posY(0), _isMoving(false), _textureIndex(0)
{
    _posX = 0;
    _posY = 0;
}

Player::~Player()
{
}

void Player::init(SDL_Renderer* renderer, float x, float y)
{
    _posX = x;
    _posY = y;
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel1.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel2.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel3.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel4.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel5.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel6.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel7.png", renderer));
    _hidelTextures.push_back(loadTexture("../src/assets/player/hidle/hidel8.png", renderer));

    _moveTextures.push_back(loadTexture("../src/assets/player/move/move1.png", renderer));
    _moveTextures.push_back(loadTexture("../src/assets/player/move/move2.png", renderer));
    _moveTextures.push_back(loadTexture("../src/assets/player/move/move3.png", renderer));
    _moveTextures.push_back(loadTexture("../src/assets/player/move/move4.png", renderer));
}

SDL_Texture* Player::loadTexture(const char* filepath, SDL_Renderer* renderer) {
    SDL_Texture* texture = IMG_LoadTexture(renderer, filepath);
    if (!texture) {
        SDL_Log("Failed to load texture %s: %s", filepath, SDL_GetError());
    }
    return texture;
}

void Player::move(float x, float y) {
    _isMoving = (x != 0 || y != 0);
    if (_isMoving) {
        _textureIndex = (_textureIndex + 1) % _moveTextures.size();
    } else {
        _textureIndex = (_textureIndex + 1) % _hidelTextures.size();
    }
}

void Player::moveX(float x) {
    move(x, 0);
}

void Player::moveY(float y) {
    move(0, y);
}

float Player::getPosX() const {
    return _posX;
}
float Player::getPosY() const {
    return _posY;
}

void Player::render(SDL_Renderer* renderer) {
    SDL_Texture* currentTexture = _isMoving ? _moveTextures[_textureIndex] : _hidelTextures[_textureIndex];
    SDL_FRect rect = {
        _posX,
        _posY,
        32,
        32
    };
    SDL_RenderTexture(renderer, currentTexture, nullptr, &rect);
}
