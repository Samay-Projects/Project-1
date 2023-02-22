//
// Created by Samay Magecha on 22/02/2023.
//

#ifndef SRC_STRINGMANIPULATION_H
#define SRC_STRINGMANIPULATION_H

using namespace std;
class StringManipulation {
private:
    const char* str;
public:
    [[nodiscard]] const char *getStr() const;

    void setStr(string str);

public:
    bool isOnlyDouble();
};


#endif //SRC_STRINGMANIPULATION_H
