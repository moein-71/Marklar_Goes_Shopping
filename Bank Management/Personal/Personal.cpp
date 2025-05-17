#include "./Personal.hpp"

using namespace std ;

Personal_Acc::Personal_Acc(std::string Holder_Name , int Acc_Number , USD balance) : Bank(Holder_Name , Acc_Number , balance) {}

void Personal_Acc::deposit(const USD & amount) {

    this->Set_balance(this->Get_balance() + amount) ;
}

void Personal_Acc::withdraw(const USD & amount) {

    USD res = this->Get_balance() - amount ;

    if(res < USD(0)) {
        throw invalid_argument("you can't pay more than of your balance") ;
    }

    this->Set_balance(res) ;
}

USD Personal_Acc::Get_DL() {
    return this->Daily_Limit ;
}

void Personal_Acc::Print() {

    cout<< "PRS : Holder_Name : " << this->Get_HN() << " | Acc_Number : " << this->Get_AC() << " | Daily_Limit : " << Daily_Limit.Get_amount() << " ||| " << this->Get_balance() ;
}