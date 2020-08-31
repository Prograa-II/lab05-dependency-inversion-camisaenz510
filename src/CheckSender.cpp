//
// Created by Maikol Guzman on 8/24/20.
//

#include "CheckSender.h"

//std::string CheckSender::sendPayment() const {
  //  return "Sending the check with the money";
//}

CheckSender::CheckSender(Interface *interface) {
    this->interface=interface;
}

CheckSender::~CheckSender() {
    delete interface;

}

bool CheckSender::success(bool reply) {
        if(reply==true){
            interface->PayCheckSender();
            return true;
        }else return false;
    }



