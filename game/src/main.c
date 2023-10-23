#include "raylib.h"

int main(void)
{
    InitWindow(512, 512, "raycast");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);

        DrawFPS(8, 8);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
