# Deck-of-Cards
A program to shuffle and deal a deck of cards that consists of class Card, class DeckOfCards and a test program.

**Class Card provides:**
1) An integer data field (private) named face.
2) An integer data field (private) named suit.
3) Two static vectors of strings (private) representing the faces and suits.
4) You should initialize static members outside of the class. Do it in Card.cpp.
5) The accessor functions for face and suit. An accessor function should always be defined
as a constant member function.
6) A constructor that receives two integers representing the face and suit and uses
them to initialize the data members.
7) A toString constant function that returns the Card as a string in the form “face of suit.”
You can use the + operator to concatenate strings.


**Class DeckOfCard contains:**
1) A vector of Cards (private) named deck to store the Cards.
2) An integer(private) named currentCard representing an index of next card to be dealt.
3) A default constructor that initializes the Cards in the deck. The constructor should use
vector function push_back to add each Card to the end of the vector after the Card is
created and initialized. This should be done for each of the 52 Cards in the deck.
4) A shuffle function that shuffles the Cards in the deck. The shuffle algorithm should
iterate through the vector of Cards. For each Card, randomly select another Card in the
deck and swap the two Cards.
5) A dealCard function that returns the next Card object from the deck.
6) A moreCards constant function that returns a bool value indicating whether there are
more Cards to deal.

*Each class's definition is seperated from it's implementation.*

