/* Function to set cursor anywhere on the screen */

COORD coord={0,0};

void gotoxy(int x, int y){
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}





/* Function for reprinting the whole pattern
   pattern = 3x3 matrix */

int marker_position[3][3] = {55,56,57,52,53,54,49,50,51};                    // Initializing a multidimensional array with with 0 initial value of elements

int game_printing_function(void){
    int row, column;



    // printing 3x3 matrix pattern
    for(row=0; row < 3; row++){
        printf("  ");
        for(column=0; column < 3; column++){
            printf("|");
            printf(" %c ",marker_position[row][column]);
            printf("|");
        }
        printf("\n");
    }

    return 0;
}


/* In to order to play in repetition multidimensional matrix should be reset to original values  */

int turns_reset = 0;

void reset_game(void){
    marker_position[0][0] = 55;
    marker_position[0][1] = 56;
    marker_position[0][2] = 57;
    marker_position[1][0] = 52;
    marker_position[1][1] = 53;
    marker_position[1][2] = 54;
    marker_position[2][0] = 49;
    marker_position[2][1] = 50;
    marker_position[2][2] = 51;

}



