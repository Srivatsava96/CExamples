//-----------------------------------------------------------------------------
//Description: Main file for creating object of inherited class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#include <iostream>
#include <stdlib.h>
#include "CFirst.h"
#include "CSecond.h"
#include "CThird.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    CThird obj;
    CThird obj2(5);
    return 0;
}
