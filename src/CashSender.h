//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include <string>
#include"Interface.h"

class CashSender {
private:
    Interface *interface;
public:
    CashSender(Interface *interface);
    std::string sendPayment() const;
    ~CashSender();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
