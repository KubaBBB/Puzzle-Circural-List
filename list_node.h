//
// Created by Jakub Boliglowa on 29.12.16.
//

#include "list.h"

#ifndef PROGRAM_4_LIST_NODE_H
#define PROGRAM_4_LIST_NODE_H

template < class DT >
class List;

template < class DT >
class ListNode
{
private:

    DT dataItem;
    ListNode *prior, *next;
    int number;


public:


// Konstructor
    ListNode ( const DT &data,ListNode *priorPtr, ListNode *nextPtr ):  dataItem(data) , prior(priorPtr) , next(nextPtr) , number(0){}
// Pola składowe


    friend class List<DT>;
};


#endif //PROGRAM_4_LIST_NODE_H
