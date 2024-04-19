#include "card.h"

std::vector<std::string> Card::faces = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                                        "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
std::vector<std::string> Card::suits = {"Hearts", "Diamonds", "Clubs", "Spades"};

Card::Card(int face, int suit) : face(face), suit(suit) {}

std::string Card::toString() const {
    return faces[face] + " of " + suits[suit];
}

int Card::getFace() const {
    return face;
}

int Card::getSuit() const {
    return suit;
}
