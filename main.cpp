#include <iostream>
#include "list_node.h"
#include "puzzle.h"

void menuList();

void menuPuzzle();

void menu();

void Puzzling();

void Listing();

using namespace std;

int main() {
/*
    //SshowMenu();
    int k = 5;
   // ListNode node(k, NULL , NULL)
    List <int> e;
    e.showStructure();
    bool empty = e.isEmpty();
    if(empty == true)
        cout<<endl<<"Pusta"<<endl;
    for(int i = 0 ; i < 5 ; i++)
       e.insert(i*i+5);
    //e.insert(6);
    //e.insert(7);
    e.count();
    e.showStructure();
    empty = e.isEmpty();
    if(empty == true)
        cout<<endl<<"Pusta"<<endl;
    else
        cout<<endl<<"Pelna"<<endl;


    cout << endl << "Kursor ustawiony na: " << e.getCursor();
    e.gotoNext() ;
    cout << "\nNastepny element: " << e.getCursor() << endl;
    e.gotoNext();
    e.gotoNext();
    cout << "Kursor 3 dalej niz kursor: " << e.getCursor() << endl;
    e.replace(33);
    cout << "Kursor zamieniony na inna liczbe: " << e.getCursor() << endl;
    e.gotoPrior();
    e.gotoPrior();
    cout << "Kursor 2 do tyłu: " << e.getCursor() << endl;
    e.gotoEnd();
    cout << "Kursor na koncu: " << e.getCursor() << endl;
    e.gotoBeginning();
    cout << "Kursor na poczatku: " << e.getCursor() << endl;
    e.gotoPrior();
    cout << "Kursor 1 do tyłu: " << e.getCursor() << endl;
    //e.remove();

    empty = e.isEmpty();
    if(empty == true)
        cout<<endl<<"Pusta"<<endl;
    else
        cout<<endl<<"Pelna"<<endl;
    cout << "Kursor: " << e.getCursor() << endl;
    e.showStructure();
    cout << endl << e.getCursor() << endl;

    cout << "Sprawdzenie operatora ==:\n";
    List <int> a;
    cout<<endl<<endl<<"*****************************************************************"<<endl;


    for(int i = 0 ; i < 5 ; i++)
        a.insert(i*i+5);
    cout<<"Obiekt a:\n";
    a.showStructure();
    cout <<"\nObiekt e:\n";
    e.showStructure();
    cout << endl;


    if(e.operator==(a))
        cout << "SA TAKIE SAME !!!"<<endl;
    else
        cout << "NIE SA !!!!!oneoneone"<<endl;

    cout<<"Obiekt a:\n";
    a.showStructure();
    cout <<"\nObiekt e:\n";
    e.showStructure();
    cout << endl;
cout << endl << endl << "****************************************************************" << endl;

    e.remove();
    cout << "\nFunkcja remove(), Kursor: " << e.getCursor() << endl;

    e.showStructure();



    cout << "\nFunkcja clear(): "<< endl;

    e.clear();
    empty = e.isEmpty();
    if(empty == true)
        cout<<endl<<"Pusta"<<endl;
    else
        cout<<endl<<"Pelna"<<endl;
    e.showStructure();
    */
    //Test List.h

/*
    Puzzle puz("siema", "hello");
    puz.display();
    if(puz.isSolved())
        cout << "\nTakie same!" << endl;
    else
        cout << "\nSa wciaz inne!" << endl;


    cout << "Zamian koncow w puz: "<<endl<<endl;
    cout << "********************\n";
    puz.swapEnds();
    puz.display();
    cout << "\n*******************\n";

cout<<endl<<endl<<"<<<<<<<<<<<    DRUGI    >>>>>>>>>>>>>>>>"<<endl;

    Puzzle puz2("Jakub","Jakub");
    puz2.display();
    if(puz2.isSolved())
        cout << "\nTakie same!" << endl;
    else
        cout << "\nSa wciaz inne!" << endl;
puz2.display();
    cout<<"\nZamiana końców"<<endl;
    puz2.swapEnds();
    puz2.display();
    if(puz2.isSolved())
        cout << "\nTakie same!" << endl;
    else
        cout << "\nSa wciaz inne!" << endl;
    cout << "###########################";
    cout << "\n\nProba ShiftLeft na obiekcie puz2:\n";
    puz2.display();
    cout<<"\nPO ZMIANIE:\n";
puz2.shiftLeft();
    puz2.display();

    cout << "\n###########################";
*/  //Test Puzzle.h


    int choose;

    menu();
    cin >> choose;
    switch (choose) {
        case 1 :
            List<int> li();
            menuList();
            Listing();
            break;

        case 2:
            menuPuzzle();
            Puzzling();

            break;

        default:
            cout << "Nie ma takiej odpowiedzi, włacz ponownie program!\n";
            break;

    }
    cout << "\n****************************************** \n\n";
    cout << "KONIEC\n";
/*
    try {
        char logic;
        Puzzle test("Jakub" , "bukJa");
        cout << "\nWybierz opcję: ";
        cin >> logic;
        while (logic != 'Q' && logic != 'q') {
            menuList();
            switch (logic) {
                case 'i':
                    //char temp;
                    cout << "Chcac ulozyc puzzle nie mozesz dodac dodatkowego elementu!"<<endl;
                    break;

                case 'r' :
                    cout << "Chcac ulozyc puzzle nie mozesz usunac elementu!"<<endl;
                    break;
                case '#' :

                    break;
                case '@' :
                    break;
                case '^':
                    break;
                case '>':
                    break;
                case '<' :
                    break;
                case 'b' :
                    break;
                case 'e':
                    break;
                case 'E':
                    break;
                case 'F':
                    break;
                case 'C':
                    break;
                default:
                    cout << "\nNie ma takiej odpowiedzi, wybierz ponownie!\n";
                    break;
            }

            cin >> logic;
        }


    }
    catch (const bad_alloc &e) {
        cerr << e.what();

    }
    catch (const logic_error &e) {
        cerr << e.what();
    }

*/
    return 1;

}


void menuList() {
    cout << "\"S\" - WYSWIETL LISTE" << endl;
    cout << "\"i\" - włóż element listy x za kurorem." << endl;
    cout << "\"r\" - usuń element na pozycji kursora." << endl;
    cout << "\"#\" - wymień element na pozycji kursora  na element x." << endl;
    cout << "\"@\" - wyświetl element na danej pozycji kursora." << endl;
    cout << "\"R\" - Odwroc liste" << endl;
    cout << "\">\" - idź do następnego elementu." << endl;
    cout << "\"<\" - idź do poprzedniego  elementu . " << endl;
    cout << "\"b\" - idź na początek listy." << endl;
    cout << "\"e\" - idź na koniec listy." << endl;
    cout << "\"E\" - czy lista jest pusta?." << endl;
    cout << "\"F\" - czy lista jest pełna?." << endl;
    cout << "\"C\" - wyczyść  listę." << endl;
    cout << "\"Q lub q\" - wyjdź z programu." << endl;

}

void menuPuzzle() {
    cout << "\"D\" - Wyswietl Puzzle " << endl <<
    "\"C\" - Zamien poczatek z koncem" << endl <<
    "\"P\" - Przesun wszystko w lewo " << endl <<
    "\"S\" - Rozwiaz Puzzle" << endl <<
    "\"R\" - Odwroc Puzzle" << endl <<
    "\"Q lub q\" - Zakoncz dzialanie programu" << endl;



}

void menu() {
    cout << "Chcesz przetestowac listę czy ulozyc puzzle?\n" <<
    "1 - Testowanie listy na liczbach typu int\n" <<
    "2 - Ukladanie puzzli\n";
}

void Listing() {

    try {
        char logic;
        List<int> ttt;
        cout << "\nWybierz opcję: ";
        cin >> logic;
        int temp;
        while (logic != 'Q' && logic != 'q') {

            switch (logic) {
                case 'i':
                    temp;
                    cout << "Podaj liczbe: ";
                    cin >> temp;
                    ttt.insert(temp);
                    cout << "Pomyslnie wlozono element za kursorem!\n" << endl;
                    break;

                case 'r' :
                    ttt.remove();
                    cout << "Usunieto element za kursorem!\n" << endl;
                    break;
                case '#' :
                    cout << "Podaj element ktory chcesz zamienic na kursorze: ";
                    cin >> temp;
                    ttt.replace(temp);
                    cout << "Zamieniono element!\n";
                    break;
                case '@' :
                    cout << "Element na pozycji kursora: " << ttt.getCursor() << endl;
                    break;
                case 'R':
                    ttt.reverse();
                    cout << "Pomyslnie odwrocono liste!\n";
                case '>':
                    ttt.gotoNext();
                    cout << "Ustawiono kursor na kolejnym elemencie!\n";
                    break;
                case '<' :
                    ttt.gotoPrior();
                    cout << "Ustawiono kursor na poprzednim elemencie!\n";
                    break;
                case 'b' :
                    ttt.gotoBeginning();
                    cout << "Ustawiono kursor na poczatku listy!\n";
                    break;
                case 'e':
                    ttt.gotoEnd();
                    cout << "Ustawiono kursor na konc listy!\n";
                    break;
                case 'E':
                    if (ttt.isEmpty())
                        cout << "Lista jest pusta!\n";
                    else
                        cout << "Lsta nie jest pusta!\n";
                    break;
                case 'F':
                    if (ttt.isFull())
                        cout << "Lsta jest pelna!\n";
                    else
                        cout << "Lista nie jest pelna!\n";
                    break;
                case 'C':
                    ttt.clear();
                    cout << "Wyczyszczono cala liste!\n";
                    break;
                case 'S':
                    ttt.showStructure();
                    cout << endl;
                default:
                    cout << "\nNie ma takiej odpowiedzi, wybierz ponownie!\n";
                    break;
            }
            menuList();
            cout << "Wybierz opcje: ";
            cin >> logic;
        }


    }
    catch (const bad_alloc &e) {
        cerr << e.what();

    }
    catch (const logic_error &e) {
        cerr << e.what();
    }
}

void Puzzling() {
    try {
        char logic;
        Puzzle test("Olek", "klOe");
        cout << "\nWybierz opcję: ";
        cin >> logic;
        while (logic != 'Q' && logic != 'q') {
            //char logic2='a';
            switch (logic) {
                case 'D':
                    test.display();
                    break;

                case 'C' :
                    test.swapEnds();
                    cout << "Pomyslnie zamieniono poczatek z koncem!\n";
                    break;
                case 'P' :
                    test.shiftLeft();
                    cout << "Pomyslnie przesunieto wszystko w lewo!\n";
                    break;
                case 'S' :
                    if (test.isSolved()) {
                        cout << "Gratulacje rozwiazales Puzzle!\n";
                        test.display();
                        //logic2 = 'q';
                        return;
                    }
                    else {
                        cout << "Niestety nie udało cię rozwiązac Puzzli!\n";
                        test.display();
                    }
                case 'R':
                    test.reversePuzzle();
                    cout << "Pomyslnie zamieniono kolejnosc!\n";
                    break;
                default:
                    cout << "\nNie ma takiej odpowiedzi, wybierz ponownie!\n";
                    break;
            }
            cout << endl;
            menuPuzzle();
            cin >> logic;
        }


    }
    catch (const bad_alloc &e) {
        cerr << e.what();

    }
    catch (const logic_error &e) {
        cerr << e.what();
    }


}


