#include "CreateMainMenuContent.h"
#include "Helpers/FileStreamHelpers.h"

ftxui::Component Fk::CreateMainMenuContent::execute()
{
    return ftxui::Renderer([]{return ftxui::paragraph(Fk::Helpers::FileStream::data());});
}
