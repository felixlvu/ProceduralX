/*
** Felix Schrynemaekers Project
** ProceduralX
** File description:
** PerlinNoise
*/

#include "PerlinNoise.hpp"
#include <cmath>

float PerlinNoise::noise(float x, float y) {
    return (std::sin(x * 12.9898 + y * 78.233) * 43758.5453) - std::floor(std::sin(x * 12.9898 + y * 78.233) * 43758.5453);
}
