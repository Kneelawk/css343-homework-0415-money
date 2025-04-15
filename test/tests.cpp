#include <sales_queue.h>
#include <gtest/gtest.h>

TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("Hello", "World");
    EXPECT_EQ(7 * 6, 42);
}

TEST(show_me_the_money, constructor) {
    SalesQueue q;
    EXPECT_EQ(0, q.size());
}

TEST(show_me_the_money, insert) {
    SalesQueue q;
    q.insertLead({"Josh", 400});
    q.insertLead({"Sara", 500});
    EXPECT_EQ(2, q.size());
}

TEST(show_me_the_money, remove) {
    SalesQueue q;
    q.insertLead({"Josh", 400});
    q.insertLead({"Sara", 500});
    EXPECT_EQ(2, q.size());
    const SalesLead sara = {"Sara", 500};
    EXPECT_EQ(sara, q.removeTopLead());
    const SalesLead josh = {"Josh", 400};
    EXPECT_EQ(josh, q.removeTopLead());
    EXPECT_EQ(0, q.size());
}

TEST(show_me_the_money, equal_income) {
    SalesQueue q;
    q.insertLead({"Josh", 400});
    q.insertLead({"Sara", 500});
    q.insertLead({"Echo", 500});
    EXPECT_EQ(3, q.size());
    const SalesLead sara = {"Sara", 500};
    EXPECT_EQ(sara, q.removeTopLead());
    const SalesLead echo = {"Echo", 500};
    EXPECT_EQ(echo, q.removeTopLead());
    const SalesLead josh = {"Josh", 400};
    EXPECT_EQ(josh, q.removeTopLead());
    EXPECT_EQ(0, q.size());
}
