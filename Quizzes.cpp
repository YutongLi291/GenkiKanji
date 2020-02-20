//
// Created by Heyo on 2020-02-19.
//
#include "Quizzes.h"

std::unordered_map<std::string, std::string> quizList[10];
std::unordered_map<std::string, std::string> Lesson3({
                                                             {"One", "一"},
                                                             {"Two", "二"},
                                                             {"Three", "三"},
                                                             {"Four","四"},
                                                             {"Five", "五"},
                                                             {"Six", "六"},
                                                             {"Seven", "七"},
                                                             {"Eight", "八"},
                                                             {"Nine", "九"},
                                                             {"Ten", "十"},
                                                             {"Hundred", "百"},
                                                             {"Thousand", "千"},
                                                             {"Ten Thousand", "万"},
                                                             {"Yen (Japanese money)", "円"},
                                                             {"Time", "時"},
                                                     });

void Quizzes::startUp() {
    quizList[0] = Lesson3;
    quizList[1] = Lesson4;
    quizList[2] = Lesson5;
    quizList[3] = Lesson6;
    quizList[4] = Lesson7;
    quizList[5] = Lesson8;
    quizList[6] = Lesson9;
    quizList[7] = Lesson10;
    quizList[8] = Lesson11;
    quizList[9] = Lesson12;
}

std::unordered_map<std::string, std::string> Quizzes::getQuiz(int input) {
        return quizList[input - 3];
}


