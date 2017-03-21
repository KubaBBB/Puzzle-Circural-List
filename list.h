//
// Created by Jakub Boliglowa on 29.12.16.
//



#ifndef PROGRAM_4_LIST_H
#define PROGRAM_4_LIST_H

#include "list_node.h"
#include <stdexcept>
#include <iostream>

using namespace std;

template<class DT>
class List {
private:

    ListNode<DT> *head;
    ListNode<DT> *cursor;


public:

    List();

    ~List();

    void insert(const DT &newDataItem); //throw ( bad_alloc )
    //  Wkłada  newDataItem do  listy. Jeżeli lista nie jest pusta to wkłada  newDataItem za pozycją kursora,
    // w p.p  wkłada  newDataItem jako pierwszy  (i jedyny ) element do listy. W obu przypadkach  kursor jest ustawiany na  newDataItem.
    void remove(); // throw ( logic_error )
    void replace(const DT &newDataItem); // throw ( logic_error )
    void clear();

    bool isEmpty() const;

    bool isFull() const;

    void gotoBeginning(); // throw ( logic_error )
    void gotoEnd();  //throw ( logic_error )
    void gotoNext(); //throw ( logic_error )
    void gotoPrior(); //throw ( logic_error )
    DT getCursor(); //const throw ( logic_error )
    void showStructure() const;
    void reverse();
    void count();

    bool operator==(const List<DT> &arg);
};

template<typename DT>
//DZIALA
void List<DT>::count() {
    cout << "Liczba wezlow: " << head->number << endl;
}

//Konstructor
template<typename DT>
//DZIALA
List<DT>::List() {
    head = NULL;
    cursor = NULL;
}

//Destructor
template<typename DT>
//DZIALA
List<DT>::~List() {
    clear();
}

// IsEmpty();
template<typename DT>
//DZIALA
bool List<DT>::isEmpty() const {
    return (head == NULL || cursor == NULL) ? true : false;
}

// Is FULL();
template<typename DT>
bool List<DT>::isFull() const {

    return (!isEmpty());
}

template<typename DT>
//DZIALA
void List<DT>::showStructure() const {

    if (isEmpty()) {
        cout << "List is Empty" << endl;
        return;
    }

    ListNode<DT> *temp = head;
    cout << temp->dataItem << " ";
    for (temp = temp->next; temp != head; temp = temp->next)
        cout << temp->dataItem << " ";
    return;
}


template<typename DT>
//DZIALA
void List<DT>::insert(const DT &newDataItem) {
    ListNode<DT> *newNode = new ListNode<DT>(newDataItem, NULL, NULL);
    if (!newNode)
        __throw_bad_alloc();

    if (isEmpty()) {

        head = newNode;
        cursor = newNode;
        newNode->next = head;
        newNode->prior = head;
    }
    else {
        newNode->next = cursor->next;
        newNode->prior = cursor;

        cursor->next = newNode;
        (newNode->next)->prior = newNode;
        gotoNext();
    }
    (head->number)++;

}

template<typename DT>
//DZIALA - po usunieciu kursor ustawia przed elementem usuwanym;
void List<DT>::remove() {
    if (isEmpty())
        __throw_logic_error("Wrong remove");
    if (head->next == head) {
        delete head;
        head = NULL;
        cursor = NULL;
        return;
    }

    (cursor->next)->prior = cursor->prior;
    (cursor->prior)->next = cursor->next;

    delete[]cursor;
    gotoPrior();
}


template<typename DT>
//DZIALA
void List<DT>::replace(const DT &newDataItem) {
    if (isEmpty())
        __throw_logic_error("Wrong replace");
    else
        cursor->dataItem = newDataItem;
}

template<typename DT>
//DZIALA
void List<DT>::clear() {
    if (isEmpty()) {
        head = NULL;
        cursor = NULL;
        return;
    }
    ListNode<DT> *temp = head;
    if (temp->next == temp) {
        delete temp;
        return;
    }
    do {
        temp = temp->next;
        delete temp->prior;
    }
    while (temp->next != head);

    delete temp;
    head = NULL;
    cursor = NULL;
}


template<typename DT>
//DZIALA
void List<DT>::gotoBeginning() {
    if (isEmpty())
        __throw_logic_error("Wrong gotoBeginning");
    cursor = head;
}

template<typename DT>
//DZIALA
void List<DT>::gotoEnd() {
    if (isEmpty())
        __throw_logic_error("Wrong gotoEnd");
    cursor = head->prior;
}

template<typename DT>
//DZIALA
void List<DT>::gotoNext() {
    if (isEmpty())
        __throw_logic_error("Wrong gotoNext");
    cursor = cursor->next;
}

template<typename DT>
//DZIALA
void List<DT>::gotoPrior() {
    if (isEmpty())
        __throw_logic_error("Wrong gotoPrior");
    cursor = cursor->prior;
}

template<typename DT>
//DZIALA
DT List<DT>::getCursor() {
    if (isEmpty())
        __throw_logic_error("Wrong getCursor");
    return cursor->dataItem;
}


template<typename DT>
bool List<DT>::operator==(const List<DT> &arg) {


    ListNode<DT> *temp = head;
    ListNode<DT> *temp2 = arg.head;
/*
    do{
        if(temp->dataItem != temp2 ->dataItem)
            return false;
        temp = temp->next;
        temp2 = temp2->next;
    }while( temp != head || temp2 != arg.head);
*/

    for (temp = temp->next; temp != head; temp = temp->next) {
        temp2 = temp2->next;
        if (temp->dataItem != temp2->dataItem)
            return false;
    }
    return true;
}

template <typename DT>
void List<DT> ::reverse() {
    if(isEmpty())
        return;
    DT value;
    ListNode <DT> *temp1,*temp2;
    temp1 = head;
    temp2 = head->prior;
    while(temp2 != temp1 && temp1->next != temp2)
    {
        value = temp1->dataItem;
        temp1->dataItem = temp2->dataItem;
        temp2->dataItem = value;

        temp1 = temp1->next;
        temp2 = temp2->prior;
    }
}

#endif //PROGRAM_4_LIST_H
