#include "./Bank_Account.hpp"
#include <iostream>

using namespace std ;

Bank::Bank(std::string Holder_Name , int Acc_Number , USD balance) : Holder_Name(Holder_Name) , Acc_Number(Acc_Number) , balance(balance) {}

std::string Bank::Get_HN() {
    return this->Holder_Name ;
}

int Bank::Get_AC() {
    return this->Acc_Number ;
}

void Bank::Set_balance(const USD other) {
    this->balance = other    ;
}

USD Bank::Get_balance() {

    return this->balance ;
}