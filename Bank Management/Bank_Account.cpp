#include "./Bank_Account.hpp"

Bank::Bank(std::string Holder_Name , int Acc_Number , USD Daily_Limit , USD balance) : Holder_Name(Holder_Name) , Acc_Number(Acc_Number) , Daily_Limit(Daily_Limit) , balance(balance) {}

void Bank::deposit(const USD & amount) {

    this->balance += amount ;
}

USD Bank::withdraw(const USD & amount) {

    this->balance -= amount ;
}

USD Bank::Get_balance() {

    return this->balance ;
}