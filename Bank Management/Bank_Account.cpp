#include "./Bank_Account.hpp"
#include <iostream>

using namespace std ;

Bank::Bank(std::string Holder_Name , int Acc_Number , USD balance , USD Daily_Limit) : Holder_Name(Holder_Name) , Acc_Number(Acc_Number) , Daily_Limit(Daily_Limit) , balance(balance) {}

void Bank::deposit(const USD & amount) {

    this->balance += amount ;
}

void Bank::withdraw(const USD & amount) {

    this->balance -= amount ;
}

std::string Bank::Get_HN() {
    return this->Holder_Name ;
}

int Bank::Get_AC() {
    return this->Acc_Number ;
}

USD Bank::Get_DL() {
    return this->Daily_Limit ;
}

void Bank::Set_balance(const USD & other) {
    this->balance = other    ;
}

USD Bank::Get_balance() {

    return this->balance ;
}

void Bank::Print() {

    cout<< "Holder_Name : " << Holder_Name << " | Acc_Number : " << Acc_Number << " | Daily_Limit : " << Daily_Limit.Get_amount() << " ||| " << balance ;
}