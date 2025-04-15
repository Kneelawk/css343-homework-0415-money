//
// Created by cyan on 4/14/25.
//

#ifndef SALES_LEAD_H
#define SALES_LEAD_H
#include <string>


class SalesLead {
public:
    std::string name;
    int income;

    SalesLead(const std::string &name, const int income)
        : name(name),
          income(income) {
    }

    friend bool operator==(const SalesLead &lhs, const SalesLead &rhs) {
        return lhs.name == rhs.name
               && lhs.income == rhs.income;
    }

    friend bool operator!=(const SalesLead &lhs, const SalesLead &rhs) {
        return !(lhs == rhs);
    }
};



#endif //SALES_LEAD_H
