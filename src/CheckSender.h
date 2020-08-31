//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

#include <string>
#include "Interface.h"

class CheckSender{
private:
    Interface *interface;
public:
    CheckSender(Interface *interface);
  //  std::string sendPayment() const;
  bool success(bool reply);
    ~CheckSender();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
