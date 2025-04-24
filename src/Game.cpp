/*
** Felix Schrynemaekers Project
** ProceduralX
** File description:
** Game
*/

#include "Game.hpp"

Game::Game()
    : _window(std::make_shared<Window>()), _player()
{
}

Game::~Game()
{
}

void Game::moveCamera(keyType event)
{
    if (event == NONE) {
        _player.move(0, 0);
        return;
    }
    if (event == UP) {
        _player.moveY(-5);
        _window->moveCamera(0, -1);
    } else if (event == DOWN) {
        _player.moveY(5);
        _window->moveCamera(0, 1);
    } else if (event == LEFT) {
        _player.moveX(-5);
        _window->moveCamera(-1, 0);
    } else if (event == RIGHT) {
        _player.moveX(5);
        _window->moveCamera(1, 0);
    } else if (event == KEY_X) {
        _window->zoomCamera(0.2);
    } else if (event == KEY_C) {
        _window->zoomCamera(-0.2);
    }
}

void Game::run()
{
    unsigned int seed;
    _window->init();
    eventType event = NO_EVENT;
    keyType input = NONE;

    seed = static_cast<unsigned int>(time(nullptr));
    World world(1200, 800, seed, _window->getRenderer());
    world.generate();
    _player.init(_window->getRenderer(), (1200 / 2), (800 / 2)); 

    while (event != CLOSE_WINDOW) {
        _window->clearWindow();
        event = _window->updateEvents();
        input = _window->getInput();

        moveCamera(input);
        world.render(_window->getRenderer(), _window->getCamera(), _window->getZoom());
        world.renderFeatures(_window->getRenderer(), _window->getCamera(), _window->getZoom());
        _player.render(_window->getRenderer());

        // window system
        _window->render();
    }
    if (event == CLOSE_WINDOW) {
        _window->destroyWindow();
    }
}
