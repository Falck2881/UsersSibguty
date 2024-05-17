#ifndef LAYOUTHELPERS_H
#define LAYOUTHELPERS_H

#include <ftxui/component/component.hpp>
#include <ftxui/dom/elements.hpp>
#include <inttypes.h>

namespace Fk::Helpers
{
    class Layout
    {
        public:
            static ftxui::Component Vertical(ftxui::Components components);
            static ftxui::Component ResizebleToLeft(ftxui::Component main, ftxui::Component back, const int32_t mainSize = 35);
    };
}
#endif // LAYOUTHELPERS_H
