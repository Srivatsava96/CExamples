//-----------------------------------------------------------------------------
//Description: File for third class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#include "CThird.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

CThird::CThird()
{
    cout<<"This is the constructor of the third file which is inherited from first and second classes"<<endl;
}

CThird::CThird(int x):CFirst(x),CSecond(x)
{
    cout<<"This is the third class constructor with value: "<<x<<endl;
}
