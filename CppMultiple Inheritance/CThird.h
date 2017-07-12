//-----------------------------------------------------------------------------
//Description: Header file for third class
//Author: Srivatsava
//Date: 12-07-2017
//-----------------------------------------------------------------------------

#ifndef CThird_H
#define CThird_H
#include "CFirst.h"
#include "CSecond.h"

class CThird: public CFirst, public CSecond
{
public:
    CThird();
    CThird(int x);
};
#endif // CThird_H
