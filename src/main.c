#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "Hello Raylib");
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib! this should push to all github and gitlab same time ", 350, 280, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

