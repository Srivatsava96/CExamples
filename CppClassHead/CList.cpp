#include "CList.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

CList::CList()
{
    head = NULL;
    tail = NULL;
}

//-------------------------------------------------------------------------
void CList::append(CData v)
{
    CNode *tmp = new CNode(v);
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
        return;
    }
    else if (tail->get_next() == NULL)
    {
        tail->set_next(tmp);
        tail = tmp;
        return;
    }
    else
    {
        cout << "Error"<<endl;
        exit(0);
    }
}

//-------------------------------------------------------------------------
void CList::append(CNode *tmp)
{
    if (head == NULL)
    {
        head = tmp;
        tail = tmp;
        return;
    }
    else if (tail->get_next() == NULL)
    {
        tail->set_next(tmp);
        tail = tmp;
        return;
    }
    else{
        cout << "Error"<<endl;
        exit(0);
    }
}

//-------------------------------------------------------------------------
void CList::display()
{
    if (head == NULL)
    {
        cout<<"List is empty.";
        return;
    }
    CNode *curNode = head;
    curNode->display();

    while (curNode->get_next() != NULL)
    {
        CNode *tmp = curNode->get_next();
        tmp->display();
        curNode = tmp;
    }
    return;
}
