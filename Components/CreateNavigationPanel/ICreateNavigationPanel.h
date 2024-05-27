#ifndef ICREATENAVIGATIONPANEL_H
#define ICREATENAVIGATIONPANEL_H

#include <ftxui/component/component.hpp>

namespace Fk
{
class ICreateNavigationPanel
    {
        public:
            virtual ~ICreateNavigationPanel() = default;
            virtual ftxui::Component execute() = 0;
        protected:
            ICreateNavigationPanel(){};
    };
}

#endif // ICREATENAVIGATIONPANEL_H
