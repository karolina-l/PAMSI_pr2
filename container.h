// Created by Karolina on 09.05.2021.
//
using namespace std;
#ifndef PR2_CONTAINER_H
#define PR2_CONTAINER_H

struct Container{
    float note;
    string title;

    Container(): note(0), title("no title"){};
    Container(float n, string t): note(n), title(std::move(t)){};
    ~Container()=default;



};

#endif //PR2_CONTAINER_H
