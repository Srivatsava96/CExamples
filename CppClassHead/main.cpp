//-----------------------------------------------------------------------------
//Description: Main file to interact and respond to requests
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include "CData.h"
#include "CNode.h"
#include "CList.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    CList myList;
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
