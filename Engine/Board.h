#pragma once
#include "Graphics.h"
#include "Location.h"
class Board
{
private:
	static constexpr int cellDimension= 10;
	static constexpr int callWidth = 10;
	static constexpr int cellHeight = 10;
	Graphics& gfx;
public:
	void DrawCell(Location& loc, Color c); 
	Board(Graphics &gfx);
	int GetDimension();
};

