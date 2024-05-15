#ifndef ACTIONBUTTON_H
#define ACTIONBUTTON_H

#include <concepts>
#include <type_traits>
#include "Contents/Content.h"


namespace FkAction
{
    class ActionButton
    {
        public:
            ActionButton(std::unique_ptr<Fk::Content> content);

        private:
            std::unique_ptr<Fk::Content> content;

        public:
            void operator()() const;
    };
}
#endif // ACTIONBUTTON_H
