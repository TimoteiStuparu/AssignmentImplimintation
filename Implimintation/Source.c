#include <stdio.h>
#include <string.h>

const char* result(const char* player1, const char* player2) {
    
    if (strcmp(player1, "Rock") == 0) {
        if (strcmp(player2, "Rock") == 0) return "Draw";
        if (strcmp(player2, "Paper") == 0) return "Player2";
        if (strcmp(player2, "Scissors") == 0) return "Player1";
    }
    else if (strcmp(player1, "Paper") == 0) {
        if (strcmp(player2, "Rock") == 0) return "Player1";
        if (strcmp(player2, "Paper") == 0) return "Draw";
        if (strcmp(player2, "Scissors") == 0) return "Player2";
    }
    else if (strcmp(player1, "Scissors") == 0) {
        if (strcmp(player2, "Rock") == 0) return "Player2";
        if (strcmp(player2, "Paper") == 0) return "Player1";
        if (strcmp(player2, "Scissors") == 0) return "Draw";
    }

    return "Invalid";
}
