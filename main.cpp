#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> 
#include "Card.h"

using namespace std;

void display_card() {
    const string shapes[] = {"spades", "diamonds", "hearts", "clubs"};
    const char asciiSymbols[] = {'\6', '\4', '\3', '\5'};  
    int shapeIndex = rand() % 4;
    int number = rand() % 13 + 1;

    Card card(shapes[shapeIndex], number);
    string figure = card.getCardSymbol();
    char symbol = asciiSymbols[shapeIndex];


    cout << " ___________________\n"
         << "|                   |\n"
         << "|   " << (number == 10 ? to_string(number) : figure) << setw(18 - (number == 10 ? 2 : 1)) << " |\n"
         << "|   " << symbol << "               |\n"
         << "|                   |\n"
         << "|                   |\n"
         << "|                   |\n"
         << "|         " << (number == 10 ? to_string(number) : figure) << setw(11 - (number == 10 ? 1 : 0)) << " |\n"
         << "|                   |\n"
         << "|                   |\n"
         << "|                   |\n"
         << "|               " << symbol << "   |\n"
         << "|               " << (number == 10 ? to_string(number) : figure) << "   |\n"
         << "|___________________|\n\n";
}


int main() {
    srand(time(0));
    char answer;

    do {
        system("CLS");

        display_card(); 

        cout << "Continue? Press '1' for new card, '0' to exit: ";
        cin >> answer;
        
    } while(answer == '1');

    return 0;
}
