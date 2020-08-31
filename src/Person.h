#ifndef UNIT_TESTING_01_GTEST_PERSON_H
#define UNIT_TESTING_01_GTEST_PERSON_H

#include <string>
#include <ostream>
#include "Interface.h"
#include "BankTransferSender.h"
#include "CashSender.h"
#include "CheckSender.h"

/**
 * Abstract Class of Person
 */
class Person: public Interface{

private:
    std::string firstName;
    std::string lastName;
    int documentId;

public:
    // Constructors
    Person();
    Person(const std::string &firstName, const std::string &lastName, int documentId);
    virtual ~Person() = default;

    // Gets and Sets
    const std::string &getFirstName() const;
    void setFirstName(const std::string &firstName);

    const std::string &getLastName() const;
    void setLastName(const std::string &lastName);

    int getDocumentId() const;
    void setDocumentId(int documentId);

    std::string processPaymentBankTransfer();
    std::string processPaymentCash();
    std::string processPaymentCheck();

    std::string PayCheckSender() override;
    std::string PayCashSender() override;
     std::string PayBankTransfer() override;

    virtual std::string toString() const; // Virtual

};

#endif //UNIT_TESTING_01_BASIC_PERSON_H
