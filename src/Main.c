#include <raylib.h>
#include "InputHandler.h"

#define WIDTH   800
#define HEIGHT  600

int main()
{
    InitWindow(WIDTH, HEIGHT, "GamePad Tester");
    SetTargetFPS(60);
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("GamePad Tester", 5, 5, 20, GRAY);
        DrawText("By Piotr Walczak", GetScreenWidth() - 190, GetScreenHeight() - 25, 20, GRAY);
        checkInput();
        EndDrawing();
    }
    CloseWindow();
    return 0;

}
