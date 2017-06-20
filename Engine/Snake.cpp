#include "Snake.h"

Snake::Snake()
{
}

void Snake::DrawHead(Board& brd, Location& loc)const
{
	brd.DrawCell(loc, Snake::snake_head);
}

void Snake::DrawBody(Board& brd, Location& bloc)const
{
	brd.DrawCell(bloc, Snake::snake_body);
}

void Snake::CheckKeyboard(Keyboard & kbd)
{
	if (kbd.KeyIsPressed(VK_UP))
	{
		dirUp = true;
		dirDown = false;
		dirLeft = false;
		dirRight = false;
	}
	else if (kbd.KeyIsPressed(VK_DOWN))
	{
		dirDown = true;
		dirUp = false;
		dirLeft = false;
		dirRight = false;
	}
	else if (kbd.KeyIsPressed(VK_LEFT))
	{
		dirLeft = true;
		dirDown = false;
		dirUp = false;
		dirRight = false;
	}
	else if (kbd.KeyIsPressed(VK_RIGHT))
	{

		dirRight = true;
		dirDown = false;
		dirLeft = false;
		dirUp = false;
	}
}

void Snake::UpdateSnake()
{	
	counter += 1;
	if (dirUp && counter >= resetTime)
	{
		bloct[0].x = loc.x;
		bloct[0].y = loc.y;
		for (int i = nSegments; i > 0; --i)
		{
			bloct[i].x = bloct[i - 1].x;
			bloct[i].y = bloct[i - 1].y;
		}
		loc.y -= 1;
		counter = 0;
	}
	else if (dirDown && counter >= resetTime)
	{
		bloct[0].x = loc.x;
		bloct[0].y = loc.y;
		for (int i = nSegments; i > 0; --i)
		{
			bloct[i].x = bloct[i - 1].x;
			bloct[i].y = bloct[i - 1].y;
		}
		loc.y += 1;
		counter = 0;
	}
	else if (dirLeft && counter >= resetTime)
	{
		bloct[0].x = loc.x;
		bloct[0].y = loc.y;
		for (int i = nSegments; i > 0; --i)
		{
			bloct[i].x = bloct[i - 1].x;
			bloct[i].y = bloct[i - 1].y;
		}

		loc.x -= 1;
		counter = 0;
	}
	else if (dirRight && counter >= resetTime)
	{
		bloct[0].x = loc.x;
		bloct[0].y = loc.y;
		for (int i = nSegments; i > 0; --i)
		{
			bloct[i].x = bloct[i - 1].x;
			bloct[i].y = bloct[i - 1].y;
		}

		loc.x += 1;
		counter = 0;
	}
}

bool Snake::HitWall()
{
	if (loc.x <= 0 || loc.x >= 80 || loc.y <= 0 || loc.y >= 60)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Snake::GrowSnake()
{
	if (nSegments < maxSegments)
	{
		nSegments++;
	}
}

bool Snake::insideTile()
{
	for (int i = 0; i < nSegments; i++)
	{
		if (loc.x == bloct[i].x && loc.y == bloct[i].y)
		{
			insidetile = true;
		}
	}
	return insidetile;
}
