#include <stdio.h>

#include "raylib.h"

int main(void) {
    puts("Hello Ludum Dare 45!");

    InitWindow(1280, 720, "Ludum Dare 45");

    while (!WindowShouldClose()) {
        BeginDrawing();

            ClearBackground(BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
