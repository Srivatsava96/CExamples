#include <iostream>
#include <stdlib.h>

using namespace std;

//-----------------------------------------------------------------------------
class CData
{
    int d;

public:
    //-------------------------------------------------------------------------
    void set_data(int x)
    {
        d = x;
    }

    //-------------------------------------------------------------------------
    int get_data()
    {
        return d;
    }

};

//-----------------------------------------------------------------------------
class CNode
{
    CData data;
    CNode *next;

    public:

    //-------------------------------------------------------------------------
    CNode(int x)
    {
        data.set_data(x);
        next = NULL;
    }

    //-------------------------------------------------------------------------
    CNode(CData x)
    {
        data = x;
        next = NULL;
    }

    //-------------------------------------------------------------------------
    void set_next(CNode *p)
    {
        next = p;
    }

    //-------------------------------------------------------------------------
    CNode* get_next()
    {
        return next;
    }

    //-------------------------------------------------------------------------
    void set_data(CData x)
    {
        //TODO: implement assignment operator
        data = x;
    }

    //-------------------------------------------------------------------------
    CNode* nextNode()
    {
        return next;
    }

    //-------------------------------------------------------------------------
    void display()
    {
        int p = data.get_data();
        cout<< "\nThe data in node is:-"<<p;
        return;
    }

};

class list
{
    CNode *head,*tail;

    public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    //-------------------------------------------------------------------------
    void append(CData v)
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
        else{
            cout << "Error"<<endl;
            exit(0);
        }
    }

    //-------------------------------------------------------------------------
    void append(CNode *tmp)
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
    void display()
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

};

int main()
{
    cout << "Hello world!" << endl;
    list myList;
    cout << "Select an option"<< endl;
    for(;;)
    {
        cout << "\n1.Create node, 2.Display linked list 3.Create node and then insert in list 4.Exit"<<endl;
        int c,x;
        cin>>c;
        switch (c)
        {
            default :
                cout <<"EXITING--- bye bye"<<endl;
                exit(0);

            case 1 :
                cout<<"Enter the value of node"<<endl;
                cin>>x;
                CData d;
                d.set_data(x);
                myList.append(d);
                break;

            case 2 :
                cout<<"Display"<<endl;
                myList.display();
                break;

            case 3 :
                cout<<"Enter the value of node"<<endl;
                cin>>x;
                CNode *myNode = new CNode(x);
                myList.append(myNode);
                break;
        }
    }
    return 0;
}
