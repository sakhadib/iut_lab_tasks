// bismillahir rahmanir rahim
#include <bits/stdc++.h>
#define F first
#define S second
#define lungi long long
#define pb push_back
#define sort(s) sort(s.begin(), s.end())
#define sortarr(a) sort(a, a + n)
#define fr(i, n) for (int i = 0; i < n; i++)
#define frone(i, n) for (int i = 1; i <= n; i++)
#define reverse(s) reverse(s.begin(), s.end())
#define N 100000 + 10
#define MAX LONG_MAX
#define tc     \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define the_flash                  \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
    temp->prev = tail;
    tail->next = head;
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;

    temp->next = head;
    head->prev = temp;
    tail = temp;
}

void insertAtMiddle(Node *&head, Node *&tail, int pos, int d)
{
    Node *mid = new Node(d);

    Node *temp = head;

    int place = 1;
    while (1)
    {
        if (pos == 1)
        {
            insertAtHead(head, tail, d);
            return;
        }

        if (place == pos)
        {
            Node *first = temp->prev;

            first->next = mid;
            mid->prev = first;

            mid->next = temp;
            temp->prev = mid;
        }

        place++;
        temp = temp->next;

        if (temp == head)
        {
            break;
        }
    }
    if (pos == place)
    {
        insertAtTail(head, tail, d);
    }
}

void deleteByPos(Node *&head, Node *&tail, int pos)
{
    Node *temp = head;

    int place = 1;
    if (pos == 1)
    {
        head = temp->next;
        head->prev = temp->prev;

        tail->next = head;

        delete temp;
        return;
    }
    while (temp != NULL)
    {
        if (place == pos)
        {
           // cout << "found" << endl;
            Node *first = temp->prev;
            Node *third = temp->next;

            first->next = third;
            third->prev = first;
            delete temp;
            return;
        }
        temp = temp->next;
        place++;
    }
}
void print(Node *&head, Node *&tail)
{
    Node *temp = head;
    int pos = 1;
    while (1)
    {

        cout << pos << " ";
        cout << temp->data << " ";
        cout << temp << " ";
        cout << temp->prev << " ";
        cout << temp->next;

        temp = temp->next;
        pos++;
        cout << endl;

        if (temp == head)
        {
            return;
        }
    }
    cout << endl;
}
int main()
{
    the_flash;

    Node *node1 = new Node(2);

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 7);
    insertAtTail(head, tail, 6);
    insertAtMiddle(head, tail, 4, 15);
    deleteByPos(head, tail, 4);
    deleteByPos(head, tail, 1);
    insertAtMiddle(head, tail, 4, 16);
    deleteByPos(head,tail,4);
    print(head, tail);

    return 0;
}