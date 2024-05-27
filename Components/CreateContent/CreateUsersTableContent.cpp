#include "CreateUsersTableContent.h"

ftxui::Component Fk::CreateUsersTableContent::execute()
{
    return ftxui::Renderer([]{return ftxui::paragraph("CreateGroupsTableContent");});
}
