#include <iostream>
#include <random>
#include<time.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *middleNode = nullptr;
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
    /**
     * Find the middleNode of the given linked List. If there is two middle consider the second as middle.
     * [1,2,3,4] middle is 3
     * [1,2,3] middle is 2
     * You can traverse the list only once. No extra data structure like array or STL.
     * Time Complexity O(n), Extra Space Complexity O(1).
     **/

    // Write your solution here:

    

    // End of your solution
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
