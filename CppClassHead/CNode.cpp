//-----------------------------------------------------------------------------
//Description: File for node class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#include "CNode.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

CNode::CNode(int x)
    {
        data.set_data(x);
        next = NULL;
    }

//-------------------------------------------------------------------------
CNode::CNode(CData x)
{
    data = x;
    next = NULL;
}

//-------------------------------------------------------------------------
void CNode::set_next(CNode *p)
{
    next = p;
}

//-------------------------------------------------------------------------
CNode* CNode::get_next()
{
    return next;
}

//-------------------------------------------------------------------------
void CNode::set_data(CData x)
{
    //TODO: implement assignment operator
    data = x;
}

//-------------------------------------------------------------------------
CNode* CNode::nextNode()
{
    return next;
}

//-------------------------------------------------------------------------
void CNode::display()
{
    int p = data.get_data();
    cout<< "\nThe data in node is:-"<<p;
    return;
}
