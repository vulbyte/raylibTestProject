// c libs
#include<fstream>
#include<iostream>
#include<string.h>
// versioning
// #include"versioning.h"
// raylib streams
#include <raylib.h>
#include <raymath.h>

int main(void) {    

    std::fstream settings;
    settings.open("../user/settings.txt", std::ios::out); //this isn't closed as it will be loaded perpetuially
                                                          
    //these are chosen to be the smallest likely monitor still produced
    int screenWidth = 640;
    int screenHeight = 480;

    if(!settings){
        std::cout<<"error, unable to load file"<<std::endl;
    }
    else {
        std::cout<<"file read successfully"<<std::endl;
        //load settings for window
        //screenWidth =  
        //screenHeight =
    }

    InitWindow(screenWidth, screenHeight, "busterz");

    typedef enum GameState {TITLE, GAMEPLAY, SETTINGS, ENDGAME} GameState;
    GameState currentGameState = TITLE;

    // TODO: SAVE FILE FOR SETTINGS
    // TODO: SAVE FILE FOR PROGRESS

    while(!WindowShouldClose()){
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

        ClearBackground(MAGENTA);

        EndDrawing();
    }

    CloseWindow();

    return (0);
}
