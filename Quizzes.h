//
// Created by Heyo on 2020-02-19.
//

#ifndef GENKIVOCAB_QUIZZES_H
#define GENKIVOCAB_QUIZZES_H


class Quizzes {

public:

    void startUp();
    static std::unordered_map<std::string, std::string> getQuiz(int input);
};


#endif //GENKIVOCAB_QUIZZES_H
