#ifndef CONTENTMAINLIB_H
#define CONTENTMAINLIB_H

#include "IShowContent.h"
#include <memory>

namespace Fk
{
    class Content
    {
        public:
            Content(std::unique_ptr<Fk::Interface::IShowContent> content);
            void show();

        private:
            std::unique_ptr<Fk::Interface::IShowContent> content;
    };
}
#endif // CONTENTMAINLIB_H
