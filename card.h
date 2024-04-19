#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

class Card {
public:
    Card(int face, int suit);
    std::string toString() const;
    int getFace() const;
    int getSuit() const;

private:
    int face;
    int suit;
    static std::vector<std::string> faces;
    static std::vector<std::string> suits;
};

#endif // CARD_H
