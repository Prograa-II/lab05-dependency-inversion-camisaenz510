//
// Created by Maikol Guzman on 8/24/20.
//

#include "CashSender.h"

//std::string CashSender::sendPayment() const {
//    return "Give the money in the hands";
//}

CashSender::CashSender(Interface *interface) {
    this->interface=interface;
}

CashSender::~CashSender() {
    delete interface;
}

bool CashSender::success(bool reply) {
        if(reply==true){
            interface->PayCashSender();
            return true;
        }else return false;
    }

