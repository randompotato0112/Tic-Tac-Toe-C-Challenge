#include<iostream>
#include<vector>

void greet(){ //intro
  std::cout << "Welcome to the Tic-Tac-Toe game! \n";
  std::cout << "Let's get started! \n";
  std::cout << "The point of the game is to have your symbols make a three in a row. \n";
  std::cout << "X goes first, followed by O \n";
  std::cout << "You choose which place to put your symbol by inputing a number when requested \n";
  std::cout << "The board looks like this \n";
  std::cout << "      |     |     \n";
  std::cout << "   1  |  2  |  3  \n";
  std::cout << " _____|_____|_____\n";
  std::cout << "      |     |     \n";
  std::cout << "   4  |  5  |  6  \n";
  std::cout << " _____|_____|_____\n";
  std::cout << "      |     |     \n";
  std::cout << "   7  |  8  |  9  \n";
  std::cout << "      |     |     \n";
  std::cout << "Play by inputing the number in the box to put your symbol there... Lets get started! \n";
}

void display_board(std::vector<int> ttt_board){ //displays the current board
  std::cout << "Displaying the board \n";
  std::cout << "      |     |     \n";
  std::cout << "   " << ttt_board[1] << "  |  "<< ttt_board[2] <<"  |  " << ttt_board[3] << "\n";
  std::cout << " _____|_____|_____\n";
  std::cout << "      |     |     \n";
  std::cout << "   " << ttt_board[4] << "  |  " << ttt_board[5]  << "  |  " << ttt_board[6] << "\n";
  std::cout << " _____|_____|_____\n";
  std::cout << "      |     |     \n";
  std::cout << "   " << ttt_board[7] << "  |  " << ttt_board[8] << "  |  " << ttt_board[9] << "\n";
  std::cout << "      |     |     \n";
}

int check_end(std::vector<int> ttt_board){ // 1 means X wins 2 means O wins
  for(int i = 1; i <= 9; i++){ // this checks the vertical condition to win the game
    if(ttt_board[i] != 0 && ttt_board[i+3] == ttt_board[i] && ttt_board[i+6] == ttt_board[i]){
      if(ttt_board[i] == 1){
        return 1; 
      } else {
        return 2;
      }
    }
    if(i % 3 == 1){ // this checks the horizontal condition to win the game
      if(ttt_board[i] != 0 && ttt_board[i+1] == ttt_board[i] && ttt_board[i+2] == ttt_board[i]){
        if(ttt_board[i] == 1){
          return 1;
        } else {
          return 2;
        }
      }
    }
  }
  if(ttt_board[1] != 0 && ttt_board[5] == ttt_board[1] && ttt_board[9] == ttt_board[1]){ // checks the left to right diagonal condition
    if(ttt_board[1] == 1){
      return 1;
    } else {
      return 2;
    }
  }
  if(ttt_board[3] != 0 && ttt_board[5] == ttt_board[1] && ttt_board[7] == ttt_board[1]){ // checks the right to left diagonal condition
    if(ttt_board[1] == 1){
      return 1;
    } else {
      return 2;
    }
  }
}