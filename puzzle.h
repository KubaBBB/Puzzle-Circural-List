//
// Created by Jakub Boliglowa on 29.12.16.
//

#include <cstring>
#include "list.h"

#ifndef PROGRAM_4_PUZZLE_H
#define PROGRAM_4_PUZZLE_H

class Puzzle {
private:
    List<char> solution, // rozwiązanie  puzzli
            puzzle; // Aktualna  konfiguracja liter
    int size;

public:
    Puzzle(char answ[], char init[]); // Konstruuje puzzle
    void shiftLeft();

    void swapEnds();

    void display();
    void reversePuzzle();
    bool isSolved();

};

//DZIALA
Puzzle::Puzzle(char *answ, char *init) {
    size = 0;
    if (strlen(answ) != strlen(init)) {
        cout << "Bledne rozmiary!" << endl;
        return;
    }

    for (int k = 0; k < strlen(answ); k++) {
        solution.insert(answ[k]);
        puzzle.insert(init[k]);
        size++;
    }

}

//DZIALA
void Puzzle::display() {
    cout << "Aktualna konfiguracja: " << endl;
    puzzle.showStructure();
    cout << "\nRozwiazanie puzzli: " << endl;
    solution.showStructure();
}

//DZIALA
bool Puzzle::isSolved() {

    if (puzzle.operator==(solution))
        return true;
    else
        return false;
}

void Puzzle::shiftLeft() {
    char temp1, temp2;
    puzzle.gotoBeginning();
    temp1 = puzzle.getCursor();


    for (int i = 0; i < size; i++) {
        puzzle.gotoNext();
        temp2 = puzzle.getCursor();
        puzzle.gotoPrior();
        puzzle.replace(temp2);
        puzzle.gotoNext();

    }
    puzzle.gotoEnd();
    puzzle.replace(temp1);


}

//DZIALA
void Puzzle::swapEnds() {
    char temp1, temp2;
    puzzle.gotoBeginning();
    temp1 = puzzle.getCursor();

    puzzle.gotoEnd();
    temp2 = puzzle.getCursor();
    puzzle.replace(temp1);

    puzzle.gotoBeginning();
    puzzle.replace(temp2);

}

void Puzzle ::reversePuzzle() {
    puzzle.reverse();
}

#endif //PROGRAM_4_PUZZLE_H



/*
 Dodatkowa metoda do zaimplementowania:
void reverse ()
 Odwraca porządek elementów w liście, kursor bez zmiany.
 */