#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <ctype.h>

/* Importing header files */

#include "helpers.h"
#include "player_choices.h"
#include "gamescreens.h"
#include "gameAlgorithim.h"


/* This function runs the whole game */
int gamemaster_program(int player1_name, int player2_name, int reset_flag){


    // To count how many times a player made a choice
    int player1_turns = 0;
    int player2_turns = 0;

    int turns = 1;
    int run = 1;


    system("cls");

    if(reset_flag == 1){
        player1_turns = 0;
        player2_turns = 0;
    }

    printf("\n\t\t\t\t\t\t\tTIC TAC TOE 1.0 \n\n");

    printf("\n\n PLAYER 1 (X): %s", player1_name);
    printf(" PLAYER 2 (O): %s", player2_name);
    /*printf("Reset flag = %d", reset_flag);
    printf("\nPlayer1 turns = %d and Player2 turns = %d", player1_turns, player2_turns);
    printf("\nGamePlay turn: %d", turns);
    printf("\nRun: %d", run);*/
    printf("\n\n");
    printf("X ------------------------------------------------ GAME STARTS NOW ------------------------------------------------ X");
    printf("\n\n\n\n");

    game_printing_function();

    while(run){

            printf("\n\n");
            // asking player for choices
            player1_choices();
            player1_turns++;

            // checking the conditions of wining
            run = game_algorithim(player1_turns, player2_turns);
            // checking turns
            turns = game_inspector(player1_turns, player2_turns, reset_flag);

            // reset the value to 0 otherwise it will go in loop with value 1 and play_count++ stop working then play_value will always be 1 and goes into an infinite loop

            reset_flag = 0;

            if(run == 0 || turns == 0)
                break;

            printf("\n");
            player2_choices();
            player2_turns++;

            // checking the conditions of wining
            run = game_algorithim(player1_turns, player2_turns);
            // checking turns
            turns = game_inspector(player1_turns, player2_turns, reset_flag);

            if(run == 0 || turns == 0)
                break;



    }



   return 0;
}



int main()
{

    // starting screen
    front_screen();
    system("cls");

    // main game window
    gameplay_selection();                              //game master program();

    printf("\n\n\n\n\n\n\n\n\t\t\t\t\t     PRESS ENTER TO CONTINUE!");
    getchar();
    system("cls");

    // end screen
    end_screen();


    return 0;
}
