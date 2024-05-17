#include "FileStreamHelpers.h"
#include <fstream>
#include <sstream>

std::string Fk::Helpers::FileStream::data()
{
    std::ifstream mainData{"release.txt"};

    if (!mainData.is_open())
        return "Error: file not exists";

    std::stringstream stream;
    stream << mainData.rdbuf();

    return stream.str();
}
