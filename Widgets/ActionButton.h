#ifndef ACTIONBUTTON_H
#define ACTIONBUTTON_H

#include <concepts>
#include <type_traits>
#include "Contents/Content.h"


namespace Fk
{
    class ActionButton
    {
        public:
            ActionButton(std::unique_ptr<Fk::Content> content);
            ActionButton(Fk::ActionButton&&);
            ActionButton(Fk::ActionButton&);
        private:
            std::unique_ptr<Fk::Content> content;

        public:
            void onClick();
            Fk::ActionButton& operator=(Fk::ActionButton&&);

    };
}
#endif // ACTIONBUTTON_H
