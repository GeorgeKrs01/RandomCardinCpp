#ifndef CARD_H
#define CARD_H

#include <string>
using namespace std;

class Card {
private:
    string color;
    string shape;
    int number;
    string symbol;

public:
    Card (string shape, int number);
    ~Card();

    void setCardShape(string shape);
    void setCardNumber(int number);
    void setCardSymbol(int number);
    void setCardColor(string shape);

    string getCardColor();
    string getCardShape();
    int getCardNumber();
    string getCardSymbol();
};

#endif
