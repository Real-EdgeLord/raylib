#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "Hello Raylib");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib! who is main ", 350, 280, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

