#include <vector>

class Screen;
class Window_mgr{

public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);

private:
	std::vector<Screen> screens;
};

#include <string>

class Screen{

friend void Window_mgr::clear(ScreenIndex);

private:
	std::string contents;	
	unsigned width = 10;
	unsigned height = 10;

};

#include <iostream>

void Window_mgr::clear(ScreenIndex){

	Screen screen;
	std::cout << screen.width << " " << screen.height << "Paprikás krumpli" << std::endl;

}


int main(){

	Window_mgr window_mgr;
	window_mgr.clear(0);
	
	return 0;
}
