#ifndef ICREATECONTENTSECTION_H
#define ICREATECONTENTSECTION_H

#include <ftxui/component/component.hpp>

namespace Fk
{
    class ICreateContentSection
    {
        public:
            ICreateContentSection() = default;
            virtual ~ICreateContentSection() = default;
            virtual ftxui::Component execute() = 0;
    };
}
#endif // ICREATECONTENTSECTION_H
