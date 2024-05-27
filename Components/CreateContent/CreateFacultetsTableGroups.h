#ifndef CREATEFACULTETSTABLEGROUPS_H
#define CREATEFACULTETSTABLEGROUPS_H

#include "ICreateContentSection.h"

namespace Fk
{
    class CreateFacultetsTableGroups: public ICreateContentSection
    {
        public:
            CreateFacultetsTableGroups() = default;
            ftxui::Component execute() override;
    };
}
#endif // CREATEFACULTETSTABLEGROUPS_H
