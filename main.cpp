#include <iostream>
#include "Components/MainMenuWindow.h"

using namespace std;

int main()
{
    std::unique_ptr<Fk::MainMenuWindow> mainMenu{std::make_unique<Fk::MainMenuWindow>()};
    mainMenu->show();
    return 0;
}
