#pragma once
#include <string>
#include "Classes.h"

void getUserNames(std::string&, std::string&);
void printBlankBoard();
void printTheBoard(Board);
void printUserPrompt(std::string, char);
void printGameWinner(Board, std::string, std::string);
int  getUserResponse();
void checkResponse(Board&, char);
void writeTheBoard(Board);