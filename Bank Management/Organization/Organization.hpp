#ifndef Organization_HPP
#define Organization_HPP

#include "../Bank_Account.hpp"

class Organization_Acc : public Bank {

    public :

        Organization_Acc(std::string Holder_Name , int Acc_Number , USD balance) ;

        void deposit(const USD & amount) override ; 

        void withdraw(const USD & amount) override ;

        USD Get_DL() ;

        void Print() override ;

    private :

    const USD Daily_Limit = USD(10000) ;

} ;

#endif //Organization_HPP