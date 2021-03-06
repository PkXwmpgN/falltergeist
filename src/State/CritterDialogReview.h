/*
 * Copyright 2012-2018 Falltergeist Developers.
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

#ifndef FALLTERGEIST_STATE_CRITTERDIALOGREVIEW_H
#define FALLTERGEIST_STATE_CRITTERDIALOGREVIEW_H

// C++ standard includes

// Falltergeist includes
#include "../State/State.h"

// Third party includes

namespace Falltergeist
{
    namespace State
    {
        class CritterDialogReview : public State
        {
            public:
                CritterDialogReview();
                ~CritterDialogReview() override;

                void init() override;

                virtual void onStateActivate(Event::State *event) override;

                void onDoneButtonClick(Event::Mouse* event);
                void onUpButtonClick(Event::Mouse* event);
                void onDownButtonClick(Event::Mouse* event);

                void setCritterName(const std::string& value);

                void addAnswer(const std::string& value);
                void addQuestion(const std::string& value);
            private:
                std::string _critterName;

        };
    }
}
#endif // FALLTERGEIST_STATE_CRITTERDIALOGREVIEW_H
