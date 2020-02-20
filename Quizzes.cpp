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
                                                             {"Mountain", "山"},
                                                             {"River", "川"},
                                                             {"Origin", "元"},
                                                             {"Spirit","気"},
                                                             {"Heaven/Sky", "天"},
                                                             {"I/private", "私"},
                                                             {"Now", "今"},
                                                             {"Rice field", "田"},
                                                             {"Woman", "女"},
                                                             {"Man", "男"},
                                                             {"To see", "見"},
                                                             {"To go", "行"},
                                                             {"To eat", "食"},
                                                             {"To drink", "飲"},
                                                     });
std::unordered_map<std::string, std::string> Lesson6({
                                                             {"East", "東"},
                                                             {"West", "西"},
                                                             {"South", "南"},
                                                             {"North","北"},
                                                             {"Mouth/Opening", "口"},
                                                             {"To exit", "出"},
                                                             {"Right", "右"},
                                                             {"Left", "左"},
                                                             {"Minute/Divide", "分"},
                                                             {"Ahead", "先"},
                                                             {"Birth", "生"},
                                                             {"Big", "大"},
                                                             {"Learning", "学"},
                                                             {"Country", "国"},
                                                     });
std::unordered_map<std::string, std::string> Lesson7({
                                                             {"Capital", "京"},
                                                             {"Child", "子"},
                                                             {"Small", "小"},
                                                             {"To meet","会"},
                                                             {"Company", "社"},
                                                             {"Father", "父"},
                                                             {"Mother", "母"},
                                                             {"High", "高"},
                                                             {"School", "校"},
                                                             {"Every", "每"},
                                                             {"Word/Language", "語"},
                                                             {"Sentence/Literature", "文"},
                                                             {"To return", "帰"},
                                                             {"To enter", "入"},
                                                     });
std::unordered_map<std::string, std::string> Lesson8({
                                                             {"Member", "員"},
                                                             {"New", "新"},
                                                             {"To listen", "聞"},
                                                             {"To make","作"},
                                                             {"To serve/work", "仕"},
                                                             {"Thing", "事"},
                                                             {"Electricity", "電"},
                                                             {"Car", "車"},
                                                             {"To rest", "休"},
                                                             {"To say", "言"},
                                                             {"To read", "読"},
                                                             {"To think", "思"},
                                                             {"Next", "次"},
                                                             {"What", "何"},
                                                     });
std::unordered_map<std::string, std::string> Lesson9({
                                                             {"Noon", "午"},
                                                             {"After", "後"},
                                                             {"Before", "前"},
                                                             {"Name","名"},
                                                             {"White", "白"},
                                                             {"Rain", "雨"},
                                                             {"To write", "書"},
                                                             {"Friend", "友"},
                                                             {"Between", "間"},
                                                             {"House", "家"},
                                                             {"To speak", "話"},
                                                             {"Little/a bit", "少"},
                                                             {"Old", "古"},
                                                             {"To know", "知"},
                                                             {"To come", "来"},
                                                     });
std::unordered_map<std::string, std::string> Lesson10({
                                                             {"To live", "住"},
                                                             {"Right/straight", "正"},
                                                             {"Year", "年"},
                                                             {"To sell","売"},
                                                             {"To buy", "買"},
                                                             {"Town", "町"},
                                                             {"Long", "長"},
                                                             {"Way", "道"},
                                                             {"Snow", "雪"},
                                                             {"To stand", "立"},
                                                             {"Self", "自"},
                                                             {"Night", "夜"},
                                                             {"Morning", "朝"},
                                                             {"To hold", "持"},
                                                     });
std::unordered_map<std::string, std::string> Lesson11({
                                                              {"Hand", "手"},
                                                              {"Paper", "紙"},
                                                              {"Favorite/to like", "好"},
                                                              {"Near","近"},
                                                              {"Bright", "明"},
                                                              {"Ill/sick", "病"},
                                                              {"Institution", "院"},
                                                              {"To reflect", "映"},
                                                              {"Picture", "画"},
                                                              {"To sing", "歌"},
                                                              {"City", "市"},
                                                              {"Place", "所"},
                                                              {"To make efforts", "勉"},
                                                              {"Strong", "強"},
                                                              {"To exist", "有"},
                                                              {"Travel", "旅"},
                                                      });
std::unordered_map<std::string, std::string> Lesson12({
                                                              {"Ancient times", "昔"},
                                                              {"Kanji repetition symbol", "々"},
                                                              {"God", "神"},
                                                              {"Early","早"},
                                                              {"To get up", "起"},
                                                              {"Cow", "牛"},
                                                              {"To use", "使"},
                                                              {"To work", "働"},
                                                              {"To link", "連"},
                                                              {"To separate", "別"},
                                                              {"Time/degrees", "度"},
                                                              {"Red", "赤"},
                                                              {"Blue", "青"},
                                                              {"Color", "色"},
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


