#pragma once
#include "SDL/SDL.h"
#include <cstdlib>  // For srand() and rand()


struct Vector2
{
	float x;
	float y;
};

class Pong
{
public:
	Pong();
	void ProcessInput(const Uint8* state);
	void UpdateGame(const float deltaTime);
	void GenerateOutput(SDL_Renderer* mRenderer);
	void Shutdown();
private:


	// Pong specific
	// Direction of paddle
	int mPaddleDir;
	// Position of paddle
	Vector2 mPaddlePos;
	// Position of ball
	Vector2 mBallPos;
	// Velocity of ball
	Vector2 mBallVel;
};
