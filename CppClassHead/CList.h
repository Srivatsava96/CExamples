//-----------------------------------------------------------------------------
//Description: Header file for list class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#ifndef CList_H
#define CList_H
#include "CNode.h"
#include "CData.h"

class CList
{
    CNode *head,*tail;
public:
    CList();
    void append(CData v);
    void append(CNode *tmp);
    void display();
};
#endif // CList_H
