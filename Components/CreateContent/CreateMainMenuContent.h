#ifndef CREATEMAINMENUCONTENT_H
#define CREATEMAINMENUCONTENT_H

#include "ICreateContentSection.h"

namespace Fk
{
    class CreateMainMenuContent: public ICreateContentSection
    {
        public:
            CreateMainMenuContent() = default;
            ftxui::Component execute() override;
    };
}
#endif // CREATEMAINMENUCONTENT_H
