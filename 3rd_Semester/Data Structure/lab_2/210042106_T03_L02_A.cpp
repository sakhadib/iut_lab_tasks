#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *middleNode = NULL;

ListNode *generator()
{
    srand(time(NULL));
    int listSize = rand() % 10000 + 1;
    ListNode *start = new ListNode(rand());
    ListNode *ptr = start;
    for (int i = 1; i < listSize; i++)
    {
        ListNode *newNode = new ListNode(rand());
        ptr->next = newNode;
        ptr = ptr->next;
    }

    int middle = listSize / 2;
    ptr = start;
    for (int i = 0; i < middle; i++)
        ptr = ptr->next;
    middleNode = ptr;
    return start;
}

ListNode *findMiddleNode(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    ListNode *HEAD = generator();
    ListNode *RET = findMiddleNode(HEAD);
    if (RET == middleNode)
        cout << "Success" << endl;
    else
        cout << "Failure" << endl;
}
