
/* Function for choices of positions made by player 1 in the matrix
   After asking from player, the values of elements in the 2D-matrix is updated
   Whole pattern of matrix is reprinted on the screen afterwards with every update made in the elements */


int player1_choices(void){
     int marker1_position = 0;
     system("COLOR 06");

    // Asking player for the position of the marker
    printf(" PLAYER1 TURN? ");
    scanf("%d", &marker1_position);
    printf("\n");

    // Using switch case to change the elements on the user input position then reprinting the pattern
    switch(marker1_position){
    case 1:
        marker_postion[2][0] = 88;
        game_printing_function();
        break;

    case 2:
        marker_postion[2][1] = 88;
        game_printing_function();
        break;

    case 3:
        marker_postion[2][2] = 88;
        game_printing_function();
        break;

    case 4:
        marker_postion[1][0] = 88;
        game_printing_function();
        break;

    case 5:
        marker_postion[1][1] = 88;
        game_printing_function();
        break;

    case 6:
        marker_postion[1][2] = 88;
        game_printing_function();
        break;

    case 7:
        marker_postion[0][0] = 88;
        game_printing_function();
        break;

    case 8:
        marker_postion[0][1] = 88;
        game_printing_function();
        break;

    case 9:
        marker_postion[0][2] = 88;
        game_printing_function();
        break;

    default:
        player1_choices();
        break;
    }

    return 0;

}

//player 2

int player2_choices(void){
    int marker2_position = 0;


    // Asking player for the position of the marker
    printf(" PLAYER2 TURN? ");
    scanf("%d", &marker2_position);
    printf("\n");

    // Using switch case to change the elements on the user input position then reprinting the pattern
    switch(marker2_position){
    case 1:
        marker_postion[2][0] = 79;
        game_printing_function();
        break;

    case 2:
        marker_postion[2][1] = 79;
        game_printing_function();
        break;

    case 3:
        marker_postion[2][2] = 79;
        game_printing_function();
        break;

    case 4:
        marker_postion[1][0] = 79;
        game_printing_function();
        break;

    case 5:
        marker_postion[1][1] = 79;
        game_printing_function();
        break;

    case 6:
        marker_postion[1][2] = 79;
        game_printing_function();
        break;

    case 7:
        marker_postion[0][0] = 79;
        game_printing_function();
        break;

    case 8:
        marker_postion[0][1] = 79;
        game_printing_function();
        break;

    case 9:
        marker_postion[0][2] = 79;
        game_printing_function();
        break;

    default:
        player2_choices();
        break;

    }

    return 0;

}
