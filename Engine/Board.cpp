#include "Board.h"

void Board::DrawCell(Location & loc, Color c)
{
	gfx.DrawRectDim(loc.x*cellDimension, loc.y*cellDimension, cellDimension, cellDimension, c);
}

Board::Board(Graphics & gfx)
	:
	gfx(gfx)
{
	
}

