// header guard protects from multiple includes
#ifndef SCREEN_H
#define SCREEN_H

#include <string>

// we have to include the Window_mgr class because we are looking
// into its scope, while we making one of Window_mgr member functions
// a friend
#include "Window_mgr.h"

class Screen{

// making Window_mgr::clear a friend, so it will have acsess to
// this class public and private variables
friend void Window_mgr::clear(ScreenIndex);

public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos ht, pos wd, char c): height(ht), width(wd),
									contents(ht*wd, c) { }
	Screen(pos ht, pos wd): Screen(ht, wd, ' '){ }

	char getCharAtCursor() const;
	char getCharAtPoint(pos row, pos col) const;
	Screen& move(pos row, pos col);
	Screen& setCharAtCursor(char);
	Screen& setCharAtPoint(pos, pos, char);
	Screen& display(std::ostream&);
	
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;

};

// explicitli inline functions have to be defined in the header
// for clarity
inline char Screen::getCharAtCursor() const{
	return contents[cursor];
}

inline char Screen::getCharAtPoint(pos row, pos col) const{
	return contents[row * width + col];
}

inline Screen& Screen::setCharAtCursor(char c){
	contents[cursor] = c;
	return *this;
}

inline Screen& Screen::setCharAtPoint(pos row, pos col, char c){
	contents[row*width + col] = c;
	return *this;
}

inline Screen& Screen::move(pos row, pos col){
	cursor = row * width + col;
	return *this;
}

inline Screen& Screen::display(std::ostream& out){
	out << contents;
	return *this;
}
#endif
