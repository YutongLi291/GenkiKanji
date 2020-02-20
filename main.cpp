#include <iostream>
#include <unordered_map>
#include <string>
#include <cassert>
#include "Quizzes.cpp"
#include "Quizzes.h"

std::string userInput;
int userScore = 0;


std::unordered_map<std::string, std::string> selectedQuiz;

int main() {
    Quizzes* quizzes = new Quizzes();
    quizzes->startUp();

    std::cout << "Welcome To Kanji Quiz for Genki I! \n" << "Please enter the lesson number (3-12) you wish to review. \n";
    std::cin >> userInput;
    selectedQuiz = quizzes->getQuiz(std::stoi(userInput));
    








}
