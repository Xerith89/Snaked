#include "Board.h"

void Board::DrawCell(Location & loc, Color c)
{
	gfx.DrawRectDim(loc.x*cellDimension, loc.y*cellDimension, cellDimension, cellDimension, c);
}

void Board::DrawCellTwo(Location & loc, Color c)
{
	gfx.DrawRectDim(loc.x*cellDimension+cellpadding, loc.y*cellDimension+cellpadding, cellDimension-cellpadding*2, cellDimension-cellpadding*2, c);
}

Board::Board(Graphics & gfx)
	:
	gfx(gfx)
{
	
}

