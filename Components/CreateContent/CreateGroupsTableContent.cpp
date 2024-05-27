#include "CreateGroupsTableContent.h"

ftxui::Component Fk::CreateGroupsTableContent::execute()
{
    return ftxui::Renderer([]{return ftxui::paragraph("CreateGroupsTableContent");});
}
