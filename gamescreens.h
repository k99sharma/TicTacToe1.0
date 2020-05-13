/*First screen of the game*/
/*FRONT SCREEN*/
void front_screen(void)
{
  //  char user_choice=0;
    gotoxy(40,7);

    system("COLOR 60");
    printf("\t****************************");
    printf("\n\t\t\t\t\t\t*          WELCOME         *");
    printf("\n\t\t\t\t\t\t****************************");
    printf("\n\n\n\t\t\t\t\t\t\tTIC TAC TOE 1.0");


    /*USER CHOICE TO PLAY GAME*/


    printf("\n\n\n\n\n\n\n\t\t\t\t\t\tPRESS ENTER TO PLAY! ");
    getchar();

    printf("\n\n\n\n\n\t\t\t\t\t\t\tLOADING");
    // sleep function
    Sleep(500);
    printf(" .");
    Sleep(500);
    printf(" . ");
    Sleep(500);
    printf(".");


   return 0;

}



/* Second screen of the game
   It consists player's name input and marker selection */

   char player1_name[50];
   char player2_name[50];

   int reset_flag = 0;


int gameplay_selection(void){

    // setting cursor on particular coordinates of the screen
    gotoxy(40,10);
    fflush(stdin);
    system("COLOR C1");


    // getting players name
    printf("ENTER PLAYER1 NAME: ");
    fgets(player1_name, 50, stdin);

    printf("\n\n\t\t\t\t\tENTER PLAYER2 NAME: ");
    fgets(player2_name, 50, stdin);

    // to check if the input is in lower case then change it into upper case

    for(int i=0; player1_name[i] != '\0'; i++){                                   // player 1
        if(player1_name[i] >= 'a' && player1_name[i] <= 'z')
            player1_name[i] = player1_name[i] - 32;
    }

    for(int i=0; player2_name[i] != '\0'; i++){                                   // player 2
        if(player2_name[i] >= 'a' && player2_name[i] <= 'z')
            player2_name[i] = player2_name[i] - 32;
    }

    printf("\n\n\n\n\n\t\t\t\t\t\t\tLOADING");
    // sleep function
    Sleep(500);
    printf(" .");
    Sleep(500);
    printf(" . ");
    Sleep(500);
    printf(".");



    system("cls");

    gamemaster_program(player1_name, player2_name, reset_flag);

    return 0;
}


/* Winning screen */


int winning_screen(int player1_turns, int player2_turns, int sum){

    char play_again_choice;

    Sleep(2000);

    system("cls");

    gotoxy(45,3);
    system("COLOR 5F");

    printf("\t****************************");
    printf("\n\t\t\t\t\t\t*   WINNER ANNOUNCEMENT    *");
    printf("\n\t\t\t\t\t\t****************************");
    printf("\n\n\n\n\n\n\n\n");

    if(player1_turns > player2_turns){

        //condition of draw game
        if(player1_turns == 5 && player2_turns == 4){
                //printf("\n%d", sum);
                if(sum == 264 || sum == 237){
                    gotoxy(45, 14);
                    printf("  X  PLAYER 1 IS THE WINNER !!!");
                }

                else{
                        gotoxy(45, 14);
                        printf("  !!! GAME IS DRAW !!!");
                }
        }

        else{
            gotoxy(45, 14);
            printf("  X  PLAYER 1 IS THE WINNER !!!");

        }

    }


    else if(player1_turns == player2_turns){
        gotoxy(45, 14);
        printf("  O  PLAYER 2 IS THE WINNER !!!");
    }


    // Asking player for another turn
    do{
        printf("\n\n\n\n\n\n\n\t\t\t\t\t\tDO YOU WANT TO PLAY AGAIN(y/n)? ");
        fflush(stdin);
        scanf("%c", &play_again_choice);

        if(play_again_choice == 'y' || play_again_choice == 'Y'){

            // resetting the matrix
            reset_flag = 1;
            reset_game();
            gamemaster_program(player1_name, player2_name, reset_flag);
            break;
        }

        else if(play_again_choice == 'n' || play_again_choice == 'N'){
            end_screen();
            break;
        }

        else{
            printf("\n\t\t\tINVALID CHOICE! CHOOSE AGAIN");
        }

    }

    while(play_again_choice != 'Y' || play_again_choice != 'y' || play_again_choice == 'N' || play_again_choice == 'n');




    getchar();

    return 0;
}



/*END SCREEN OF GAME*/

int end_screen()
{

    system("cls");

    gotoxy(40,2);
    system("COLOR 60");
    printf("\n\n\n\t\t\t\t\t\t  THANKS FOR PLAYING !!");
    printf("\n\n\t\t\t\t\t\t     TIC TAC TOE 1.0");
    printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t CREDITS:");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t-KALASH SHARMA");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t-DIVYA CHAUDHARY");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t  DATE: 12 may 2020");                     //UPLOADED
    printf("\n\n\t\t\t\t\t\tPRESS ENTER TO QUIT !");

    fflush(stdin);
    getchar();

    exit(0);

    return 0;

}
