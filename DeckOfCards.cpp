#include "DeckOfCards.h"
#include <algorithm>
#include <random>
#include <chrono>

DeckOfCards::DeckOfCards() : currentCard(0) {
    for (int suit = 0; suit < Card::suits.size(); suit++) {
        for (int face = 0; face < Card::faces.size(); face++) {
            deck.push_back(Card(face, suit));
        }
    }
}

void DeckOfCards::shuffle() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(deck.begin(), deck.end(), std::default_random_engine(seed));
}

Card DeckOfCards::dealCard() {
    return deck[currentCard++];
}

bool DeckOfCards::moreCards() const {
    return currentCard < deck.size();
}
