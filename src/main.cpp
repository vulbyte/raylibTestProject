#include "raylib.h"
#include <raymath.h>

int main(void) {
    InitWindow(400, 244, "template");

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return (0);
}
