#include <iostream>
#include <unordered_map>
#include <string>
#include <cassert>
#include "Quizzes.cpp"
#include "Quizzes.h"
#include <cstdlib>
#include <locale.h>

std::string userInput;
int userScore = 0;
int totalScore;


std::unordered_map<std::string, std::string> selectedQuiz;

void mainQuiz();

int main() {
    mainQuiz();
}

void mainQuiz() {
    Quizzes* quizzes = new Quizzes();
    quizzes->startUp();

    std::cout << "Welcome To Kanji Quiz for Genki I! \n" << "Please enter the lesson number (3-12) you wish to review. \n";
    std::cin >> userInput;
    selectedQuiz = quizzes->getQuiz(std::stoi(userInput));
    totalScore = selectedQuiz.size();
    for (std::unordered_map<std::string, std::string>::iterator i = selectedQuiz.begin();
    i !=selectedQuiz.end(); i++){
        std::cout << "Please type the Kanji for " << i->first <<std::endl;
        std::cin >> userInput;
        if (userInput == i->second){
            std::cout << "Right answer!" << std::endl;
            userScore++;
        }
        else{
            std::cout << "Wrong answer!" <<std::endl;
            std::cout << "The correct answer is " << i->second << std::endl;
        }
    }
    std::cout << "Your final score is: " << userScore << " out of " << totalScore << std::endl;
    std::cout << "Press enter to exit, or enter \"r\" to do another quiz";
    std::cin >> userInput;
    if (userInput == "r"){
        mainQuiz();
        userScore = 0;
    }
    else{
        exit(0);
    }
}
