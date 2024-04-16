#include "raylib.h"
#include <raymath.h>

int main(void) {
    InitWindow(400, 244, "template");

    typedef enum GameState {TITLE, GAMEPLAY, SETTINGS, ENDGAME} GameState;
    GameState currentGameState = TITLE;

    // TODO: SAVE FILE FOR SETTINGS
    // TODO: SAVE FILE FOR PROGRESS

    while(!WindowShouldClose(currentGameState){
        switch(currentGameState){
            default:
            case TITLE:{

            } break;
            case GAMEPLAY:{

            } break;
            case SETTINGS:{

            } break;
            case ENDGAME:{

            } break;
        }
        BeginDrawing();
        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    CloseWindow();

    return (0);
}
