//-----------------------------------------------------------------------------
//Description: Header file for node class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#ifndef CNode_H
#define CNode_H
#include "CData.h"

class CNode
{
    CData data;
    CNode *next;
    public:
        CNode(int x);
        CNode(CData x);
        void set_next(CNode *p);
        CNode* get_next();
        void set_data(CData x);
        CNode* nextNode();
        void display();
};
#endif // CNode_H
