#include<iostream>
#include<vector>
#include "ttt_functions.hpp"

std::vector<int> ttt_board(10, 0);
int win_condition = 0;
int placement_input = 0;

int main(){
  greet();
  for(int turns = 1; turns <= 9; turns++){
    placement_input = 0;
    while(placement_input == 0){
      if(turns % 2 == 1){
          std::cout << "X's turn! Make your move! ";
          std::cin >> placement_input;
          if(ttt_board[placement_input] == 0){
            ttt_board[placement_input] = 1;
          } else {
            std::cout << "Choose a spot that hasn't already been taken \n";
          }
      } else {
        std::cout << "O's turn! Make your move! ";
        std::cin >> placement_input;
        if(ttt_board[placement_input] == 0){
            ttt_board[placement_input] = 2;
          } else {
            std::cout << "Choose a spot that hasn't already been taken \n";
        }
      }
    }
    display_board(ttt_board);
    win_condition = check_end(ttt_board);
    if(win_condition == 1){ //checks win or loss
      std::cout << "X has won the match! \n";
      break;
    } else if(win_condition == 2){
      std::cout << "O has won the match! \n";
      break;
    }
  }
  std::cout << "You have drawn! \n";
}