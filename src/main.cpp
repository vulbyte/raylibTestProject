//clibs
#include<iostream>
#include<fstream>
#include<string>
//raylib streams
#include "raylib.h"
#include <raymath.h>

int main(void) {    
    fstream settings;
    FileName.open("../user/settings.txt", ios::out); //this isn't closed as it will be loaded perpetuially
    if(!setting){
        cout<<"error, unable to load file"
    }
    else {
        cout<<"file read successfully";
        File          
    }

    

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
