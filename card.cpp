#include "Card.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Card::Card(string shape, int number) {
    setCardShape(shape);
    setCardNumber(number);
    setCardSymbol(number);
    setCardColor(shape);
}

Card::~Card() {
}

void Card::setCardShape(string shape) {
    if (shape == "spades" || shape == "diamonds" || shape == "hearts" || shape == "clubs") {
        this->shape = shape;
    } else {
        this->shape = "wrong shape";
    }
}

void Card::setCardNumber(int number) {
    if (number >= 1 && number <= 13) {
        this->number = number;
    } else {
        this->number = 0;
    }
}

void Card::setCardSymbol(int number) {
    switch (number) {
        case 1: this->symbol = "A"; break;
        case 2: this->symbol = "2"; break;
        case 3: this->symbol = "3"; break;
        case 4: this->symbol = "4"; break;
        case 5: this->symbol = "5"; break;
        case 6: this->symbol = "6"; break;
        case 7: this->symbol = "7"; break;
        case 8: this->symbol = "8"; break;
        case 9: this->symbol = "9"; break;
        case 10: this->symbol = "10"; break;
        case 11: this->symbol = "J"; break;
        case 12: this->symbol = "Q"; break;
        case 13: this->symbol = "K"; break;
        default: this->symbol = "\0"; break;
    }
}

void Card::setCardColor(string shape) {
    if (shape == "diamonds" || shape == "hearts") {
        this->color = "red";
    } else if (shape == "spades" || shape == "clubs") {
        this->color = "black";
    } else {
        this->color = "unknown";
    }
}

string Card::getCardColor() {
    return this->color;
}

string Card::getCardShape() {
    return this->shape;
}

int Card::getCardNumber() {
    return this->number;
}

string Card::getCardSymbol() {
    return this->symbol;
}
