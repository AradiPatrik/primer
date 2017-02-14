#ifndef WINDOW_MGR_H
#define WINDOW_MGR_H

#include <vector>

// Screen is not included because it needs the definition of the
// Window_mgr class to compile

class Screen;
class Window_mgr{

public:
	using ScreenIndex = std::vector<Screen>::size_type;

	// we don't want the default behaviour of the default constructor
	// but we can't define the behaviour here because Screen is incomplete
	Window_mgr();

	void clear(ScreenIndex);

private:
	// can't initialize screens here, because the Screen class
	// is yet incomplete
	std::vector<Screen> screens;
	

};

#endif
