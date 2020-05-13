
/* Function used to check the working of the game */

// row, column, diagonal sum accumulator initialization
int row_sum=0, column_sum=0, diagonal_sum=0;


// playing count should always be less than 9 afterward game will get over!
int play_count = 1;

int game_inspector(int player1_turns, int player2_turns, int reset_flag){

    if(reset_flag == 1){
        play_count = 1;
    }
   // printf("Play count: %d", play_count);

    play_count++;

    if(play_count > 9){
        winning_screen(player1_turns, player2_turns, 0);
        return 0;
    }


    return 1;
}



/* The algorithm for the game to find out who is the winner */

int game_algorithim(int player1_turns, int player2_turns){

    int row, column;



    // Checking all possible combinations in marker_position matrix

    // checking all rows
    for(row=0; row < 3; row++){
        row_sum = 0;
        for(column=0; column < 3; column++){
            row_sum += marker_postion[row][column];


            }
            if(row_sum == 264 || row_sum == 237){
                winning_screen(player1_turns, player2_turns, row_sum);
                return 0;
        }
    }

    // checking all columns
    for(column=0; column < 3; column++){
        column_sum = 0;
        for(row=0; row < 3; row++){
            column_sum += marker_postion[row][column];


            }
            if(column_sum == 264 || column_sum == 237){
                winning_screen(player1_turns, player2_turns, column_sum);
                return 0;
        }
    }

    /* checking all diagonals */

    diagonal_sum = 0;
    // left to right diagonal of the matrix
    for(row=0; row < 3; row++){
        for(column=0; column < 3; column++){
            if(row == column){
                diagonal_sum += marker_postion[row][column];

            }
            if(diagonal_sum == 264 || diagonal_sum == 237){
                    winning_screen(player1_turns, player2_turns, diagonal_sum);
                    return 0;

            }
        }
    }


    // resetting the value of diagonal_sum = 0 for right to left diagonal sum
    diagonal_sum = 0;

    // right to left diagonal of the matrix
    for(row=0; row < 3; row++){
        for(column=0; column < 3; column++){
            if((row+column) == 2){
                diagonal_sum += marker_postion[row][column];


                }

            if(diagonal_sum == 264 || diagonal_sum == 237){
                    winning_screen(player1_turns, player2_turns, diagonal_sum);
                    return 0;

            }
        }
    }


    return 1;
}



