#include "raylib.h"

void setup()
{
}

int main()
{
	InitWindow(800, 600, "3D Viewer");
	
	SetWindowState(FLAG_VSYNC_HINT);
	SetTargetFPS(60);
	
	// sets up game variables
	setup();
	
	while (!WindowShouldClose())
	{
		//** LOGIC **//
		
		//** DRAWING **//
		BeginDrawing();
		
		ClearBackground(BLACK);
		
		DrawFPS(10, 10);
		
		EndDrawing();
	}
	
	CloseWindow();
	
	return 0;
}