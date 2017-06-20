#pragma once
#include "Location.h"
#include "Board.h"
#include "Graphics.h"
#include "Keyboard.h"
#include "Fruit.h"
class Snake
{
private:
	static constexpr Color snake_head = Colors::Yellow;
	static constexpr Color snake_body = Colors::Green;
	static constexpr int maxSegments = 50;
	bool dirRight = false;
	bool dirLeft = false;
	bool dirUp = false;
	bool dirDown = false;
	int resetTime = 20;
	int counter = 0;
	bool insidetile = false;
public:
	Snake();
	void DrawHead(Board& brd, Location& loc)const;
	void DrawBody(Board& brd, Location& bloc)const;
	void CheckKeyboard(Keyboard& kbd);
	void UpdateSnake();
	bool HitWall();
	int nSegments = 1;
	void GrowSnake();
	bool insideTile();
	Location bloct[50];
	Location loc = { 5,10 };
};

