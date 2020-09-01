//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H

#include <string>
#include"Interface.h"

class CashSender: public Interface{

public:

   std::string FinalPayment() override;
    ~CashSender();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
