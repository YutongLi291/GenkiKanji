//
// Created by Heyo on 2020-02-19.
//
#include "Quizzes.h"


std::unordered_map<std::string, std::string> quizList[10];
std::unordered_map<std::string, std::string> Lesson3({
                                                             {u8"One", "一"},
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
std::unordered_map<std::string, std::string> Lesson4({
                                                             {"Day/Sun", "日"},
                                                             {"Book/Basis", "本"},
                                                             {"Person", "人"},
                                                             {"Month/Moon","月"},
                                                             {"Fire", "火"},
                                                             {"Water", "水"},
                                                             {"Tree", "木"},
                                                             {"Gold", "金"},
                                                             {"Soil", "土"},
                                                             {"Weekday", "曜"},
                                                             {"Up", "上"},
                                                             {"Down", "下"},
                                                             {"Middle", "中"},
                                                             {"Half", "半"}
                                                     });
std::unordered_map<std::string, std::string> Lesson5({
                                                             {"Mountain", "一"},
                                                             {"River", "二"},
                                                             {"Origin", "三"},
                                                             {"Spirit","四"},
                                                             {"Heaven/Sky", "五"},
                                                             {"I/private", "六"},
                                                             {"Now", "七"},
                                                             {"Eight", "八"},
                                                             {"Nine", "九"},
                                                             {"Ten", "十"},
                                                             {"Hundred", "百"},
                                                             {"Thousand", "千"},
                                                             {"Ten Thousand", "万"},
                                                             {"Yen (Japanese money)", "円"},
                                                             {"Time", "時"}
                                                     });

void Quizzes::startUp() {
    quizList[0] = Lesson3;
    quizList[1] = Lesson4;
    quizList[2] = Lesson5;
//    quizList[3] = Lesson6;
//    quizList[4] = Lesson7;
//    quizList[5] = Lesson8;
//    quizList[6] = Lesson9;
//    quizList[7] = Lesson10;
//    quizList[8] = Lesson11;
//    quizList[9] = Lesson12;
}

std::unordered_map<std::string, std::string> Quizzes::getQuiz(int input) {
        return quizList[input - 3];
}


