//
// Created by Camila on 29/08/2020.
//


#ifndef MY_PROJECT_NAME_INTERFACE_H
#define MY_PROJECT_NAME_INTERFACE_H
#include <sstream>
#include <iomanip>
#include "CashSender.h"
#include "CheckSender.h"
#include "CashSender.h"

//All
class Interface {
public:
    virtual void Pay()=0;
};


#endif //MY_PROJECT_NAME_INTERFACE_H
