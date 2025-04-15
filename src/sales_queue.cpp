//
// Created by cyan on 4/14/25.
//

#include "sales_queue.h"

void SalesQueue::insertLead(const SalesLead &lead) {
    this->queue.emplace(lead, this->queue.size());
}

SalesLead SalesQueue::removeTopLead() {
    SalesLead lead = this->queue.top().lead;
    this->queue.pop();
    return lead;
}

size_t SalesQueue::size() const {
    return this->queue.size();
}
