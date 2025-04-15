//
// Created by cyan on 4/14/25.
//

#ifndef SALESQUEUE_H
#define SALESQUEUE_H
#include <queue>
#include "sales_lead.h"


class SalesLeadHolder {
public:
    SalesLead lead;
    size_t insertionOrder;

    SalesLeadHolder(const SalesLead &lead, const size_t insertion_order)
        : lead(lead),
          insertionOrder(insertion_order) {
    }
};


class LeadComparator {
public:
    bool operator()(const SalesLeadHolder &a, const SalesLeadHolder &b) const {
        if (a.lead.income != b.lead.income) return a.lead.income < b.lead.income;
        return a.insertionOrder > b.insertionOrder;
    }
};


class SalesQueue {
    std::priority_queue<SalesLeadHolder, std::vector<SalesLeadHolder>, LeadComparator> queue;

public:
    void insertLead(const SalesLead &lead);

    SalesLead removeTopLead();

    [[nodiscard]] size_t size() const;
};


#endif //SALESQUEUE_H
