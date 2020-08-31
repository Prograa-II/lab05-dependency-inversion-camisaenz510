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
    virtual std::string PayCheckSender()=0;
    virtual std::string PayCashSender()=0;
    virtual std::string PayBankTransfer()=0;
    ~Interface();
};


#endif //MY_PROJECT_NAME_INTERFACE_H
