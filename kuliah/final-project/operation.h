
#ifndef OPERATION_H
#define OPERATION_H

#include <iostream>
#include "menu.h"

class Operation
{

public:
    void getMenu(Menu *menu);
    void searchMenu(Menu *menu);
    void insertMenu(Menu *menu);
    void removeMenu(Menu *menu);
    void sortMenu(Menu *menu);
};
#endif
