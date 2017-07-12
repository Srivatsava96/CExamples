//-----------------------------------------------------------------------------
//Description: File for first class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#include "CFirst.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

CFirst::CFirst()
{
    cout<<"This is the constructor of first class"<<endl;
}

CFirst::CFirst(int x)
{
    cout<<"This is first class constructor with value: "<<x<<endl;
}

CFirst::~CFirst()
{
    cout<<"Destructor of first class called"<<endl;
}
