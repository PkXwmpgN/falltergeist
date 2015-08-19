/*
 * Copyright 2012-2015 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FALLTERGEIST_UI_TILE_H
#define FALLTERGEIST_UI_TILE_H

// C++ standard includes
#include <memory>

// Falltergeist includes

// Third party includes

namespace Falltergeist
{
namespace Graphics
{
    class Texture;
}

namespace UI
{

class Tile
{
public:
    Tile(unsigned int number, int x = 0, int y = 0);

    unsigned int number() const;
    int x() const;
    int y() const;

    unsigned int index() const;
    void setIndex(unsigned int value);

protected:
    unsigned int _index = 0;
    unsigned int _number = 0;
    int _x = 0;
    int _y = 0;
};

}
}
#endif // FALLTERGEIST_UI_TILE_H
