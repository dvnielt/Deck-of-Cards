// test program
#include "DeckOfCards.h"
#include <iostream>

int main() {
    DeckOfCards deckOfCards;
    deckOfCards.shuffle();
    while (deckOfCards.moreCards()) {
        std::cout << deckOfCards.dealCard().toString() << std::endl;
    }
    return 0;
}
