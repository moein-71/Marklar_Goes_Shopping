#ifndef Personal_HPP
#define Personal_HPP

#include "../Bank_Account.hpp"

class Personal_Acc : public Bank {

    public :

    Personal_Acc(std::string Holder_Name , int Acc_Number , USD balance) ;

    void deposit(const USD & amount) override ; 

    void withdraw(const USD & amount) override ;

    USD Get_DL() ;

    void Print() override ;

    private :

       const USD Daily_Limit = USD(1000) ;

} ;

#endif //Personal_hpp