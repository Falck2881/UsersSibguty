#include "LayoutHelpers.h"

ftxui::Component Fk::Helpers::Layout::Vertical(ftxui::Components components)
{
    return ftxui::Container::Vertical(components);
}

ftxui::Component Fk::Helpers::Layout::ResizebleToLeft(ftxui::Component main, ftxui::Component back, const int32_t mainSize)
{
    static int32_t _mainSize = mainSize;
    return ftxui::ResizableSplitLeft(main, back, &_mainSize);
}
