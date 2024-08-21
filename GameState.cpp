//
//  GameState.cpp
//  Connect Four Game
//
//  Created by arshihihi


#include "GameState.h"

#include <iostream>

#include "globals.h"

// ECE244 Student: add you code below
GameState::GameState() {
  selectedRow = 0;
  selectedColumn = 0;
  moveValid = true;
  gameOver = false;
  turn = true;
  winner = 0;
  for (int j = 0; j < boardSize; j++) {
    for (int i = 0; i < boardSize; i++) {
      gameBoard[j][i] = Empty;
    }
  }
};

int GameState::get_selectedRow() { return selectedRow; };

int GameState::get_selectedColumn() { return selectedColumn; };

void GameState::set_selectedRow(int value) {
  if (value < 0 || value >= boardSize) {
    return;
  }
  selectedRow = value;
};

void GameState::set_selectedColumn(int value) {
  if (value < 0 || value >= boardSize) {
    return;
  }
  selectedColumn = value;
};

bool GameState::get_moveValid() { return moveValid; };

void GameState::set_moveValid(bool value) { moveValid = value; };

bool GameState::get_gameOver() { return gameOver; };

void GameState::set_gameOver(bool value) { gameOver = value; };

bool GameState::get_turn() { return turn; };

void GameState::set_turn(bool value) {
  // cout << "in gamestate: turn = " << turn << endl;
  turn = value;
  // cout << "after change, in gamestate: turn = " << turn << endl;
};

int GameState::get_winner() { return winner; };

void GameState::set_winner(int value) { winner = value; };

int GameState::get_gameBoard(int row, int col) {
  if (row < 0 || row >= boardSize) {
    return Empty;
  }
  if (col < 0 || col >= boardSize) {
    return Empty;
  }
  return gameBoard[row][col];
};

void GameState::set_gameBoard(int row, int col, int value) {
  if (row < 0 || row >= boardSize) {
    return;
  }
  if (col < 0 || col >= boardSize) {
    return;
  }
  gameBoard[row][col] = value;
};