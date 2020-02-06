#include "Cursor.h"

void Cursor::updatecursor(Input* in)
{
	int x = in->getMouseX();
	int y = in->getMouseY();
	setPosition(x, y);
}
