#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *virtualHead = new ListNode(-1);
        ListNode *k = virtualHead;
        int flag = 0;
        int t;
        while (l1 || l2)
        {
            int n1 = (l1 ? l1->val : 0);
            int n2 = (l2 ? l2->val : 0);
            t = n1 + n2 + flag;
            flag = t > 9 ? 1 : 0;
            k->next = new ListNode(t % 10);
            k = k->next;
            l1 = (l1 ? l1->next : l1);
            l2 = (l2 ? l2->next : l2);
        }
        if (flag)
        {
            k->next = new ListNode(1);
        }
        return virtualHead->next;
    }
};