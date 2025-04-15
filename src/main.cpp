#include <iostream>
#include <sales_queue.h>

int main() {
    SalesQueue q;
    q.insertLead({"Jerry", 100});
    q.insertLead({"Barron", 200});
    q.insertLead({"Henry", 500});
    q.insertLead({"Jeff", 200});

    while (q.size() > 0) {
        SalesLead l = q.removeTopLead();
        std::cout << "Lead: " << l.name << ", income: " << l.income << '\n';
    }

    return 0;
}
