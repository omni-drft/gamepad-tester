#include <raylib.h>

#define GAME_CONTROLLER 0

void checkInput()
{
    if (IsGamepadAvailable(GAME_CONTROLLER))
    {
        /* Arrow up */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_LEFT_FACE_UP))
            DrawCircle(GetScreenWidth() / 2 - 200, GetScreenHeight() / 2 + 100, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2 - 200, GetScreenHeight() / 2 + 100, 20, GRAY);

        /* Arrow down */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_LEFT_FACE_DOWN))
            DrawCircle(GetScreenWidth() / 2 - 200, GetScreenHeight() / 2 + 180, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2 - 200, GetScreenHeight() / 2 + 180, 20, GRAY);

        /* Arrow left */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_LEFT_FACE_LEFT))
            DrawCircle(GetScreenWidth() / 2 - 240, GetScreenHeight() / 2 + 140, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2 - 240, GetScreenHeight() / 2 + 140, 20, GRAY);

        /* Arrow right */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_LEFT_FACE_RIGHT))
            DrawCircle(GetScreenWidth() / 2 - 160, GetScreenHeight() / 2 + 140, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2 - 160, GetScreenHeight() / 2 + 140, 20, GRAY);

        /* Left analog */
        DrawCircle(GetScreenWidth() / 2 - 200, GetScreenHeight() / 2, 36, GRAY);
        DrawCircle(GetScreenWidth() / 2 - 200, GetScreenHeight() / 2, 34, BLACK);
    
        DrawCircle(
            GetScreenWidth() / 2 - 200 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_X) * 30), 
            GetScreenHeight() / 2 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_Y) * 30), 
            31, GRAY
        );

        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_LEFT_THUMB))
        {
            DrawCircle(
                GetScreenWidth() / 2 - 200 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_X) * 30), 
                GetScreenHeight() / 2 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_Y) * 30), 
                31, RED
            );
        }

        /*Left back button*/
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_LEFT_TRIGGER_1))
            DrawRectangle(GetScreenWidth() / 2 - 240, GetScreenHeight() / 2 - 120, 80, 40, RED);
        else
            DrawRectangle(GetScreenWidth() / 2 - 240, GetScreenHeight() / 2 - 120, 80, 40, GRAY);

        /* Left trigger */
        DrawRectangle(GetScreenWidth() / 2 - 240, GetScreenHeight() / 2 - 190, 80, 60, GRAY);
        DrawRectangle(GetScreenWidth() / 2 - 240, GetScreenHeight() / 2 - 190, GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_TRIGGER) * 80, 60, RED);

        /* Right analog */
        DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 + 140, 36, GRAY);
        DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 + 140, 34, BLACK);
    
        DrawCircle(
            GetScreenWidth() / 2 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_X) * 30), 
            GetScreenHeight() / 2 + 140 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_Y) * 30), 
            31, GRAY
        );

        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_RIGHT_THUMB))
        {
            DrawCircle(
                GetScreenWidth() / 2 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_X) * 30), 
                GetScreenHeight() / 2 + 140 + (GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_Y) * 30), 
                31, RED
            );
        }

        /* Y */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_RIGHT_FACE_UP))
            DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 - 40, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 - 40, 20, GRAY);

        /* A */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
            DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 + 40, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 + 40, 20, GRAY);

        /* X */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_RIGHT_FACE_LEFT))
            DrawCircle(GetScreenWidth() / 2 - 40, GetScreenHeight() / 2, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2 - 40, GetScreenHeight() / 2, 20, GRAY);

        /* B */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
            DrawCircle(GetScreenWidth() / 2 + 40, GetScreenHeight() / 2, 20, RED);
        else
            DrawCircle(GetScreenWidth() / 2 + 40, GetScreenHeight() / 2, 20, GRAY);

        /* Right back button*/
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_RIGHT_TRIGGER_1))
            DrawRectangle(GetScreenWidth() / 2 - 40, GetScreenHeight() / 2 - 120, 80, 40, RED);
        else
            DrawRectangle(GetScreenWidth() / 2 - 40, GetScreenHeight() / 2 - 120, 80, 40, GRAY);

        /* Right trigger */
        DrawRectangle(GetScreenWidth() / 2 - 40, GetScreenHeight() / 2 - 190, 80, 60, GRAY);
        DrawRectangle(GetScreenWidth() / 2 - 40, GetScreenHeight() / 2 - 190, GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_TRIGGER) * 80, 60, RED);

        /* Middle Left */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_MIDDLE_LEFT))
            DrawCircle(270, 200, 20, RED);
        else
            DrawCircle(270, 200, 20, GRAY); 

        /* Middle Right */
        if (IsGamepadButtonDown(GAME_CONTROLLER, GAMEPAD_BUTTON_MIDDLE_RIGHT))
            DrawCircle(330, 200, 20, RED);
        else
            DrawCircle(330, 200, 20, GRAY); 

        /* Values Title */
        DrawText("Values", 580, 220, 20, BLACK);

        /* Left Trigger */
        DrawText(TextFormat("L Trigger:    %2.2f", (GetGamepadAxisMovement(GAME_CONTROLLER,GAMEPAD_AXIS_LEFT_TRIGGER) + 1) * 50), 510, 250, 20, GRAY);
        /* Left analog */
        DrawText(
                TextFormat("L Analog:      %2.2f,  %2.2f", 
                    GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_X), 
                    GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_LEFT_Y)), 
                510, 270, 20, GRAY);
        
        /* Left Trigger */
        DrawText(TextFormat("R Trigger:    %2.2f", (GetGamepadAxisMovement(GAME_CONTROLLER,GAMEPAD_AXIS_RIGHT_TRIGGER) + 1) * 50), 510, 290, 20, GRAY);
        /* Left analog */
        DrawText(
                TextFormat("R Analog:      %2.2f,  %2.2f", 
                    GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_X), 
                    GetGamepadAxisMovement(GAME_CONTROLLER, GAMEPAD_AXIS_RIGHT_Y)), 
                510, 310, 20, GRAY);

    }
    else 
    {
        DrawText("Gamepad not detected", GetScreenWidth() / 2 - 160, GetScreenHeight() / 2 - 14, 28, GRAY);
    }
}
