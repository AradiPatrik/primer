#include <string>
#include "Window_mgr.h"
#include "Screen.h"

// default constructor, emplemented in .cpp file because here
// class Screen is a complete type
Window_mgr::Window_mgr():screens{Screen(24, 80, ' ')}{ }

// class Screen is a complete type so we can define the behaviour
// of the functions that rely on the implementation of Screen
void Window_mgr::clear(ScreenIndex index){
	Screen &screen = screens[index];
	screen.contents = std::string(screen.height * screen.width, ' ');
}
