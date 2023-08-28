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
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;

    tail = temp;
}

void insertAtmiddle(Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *loo = new Node(d);

    Node *temp = head;

    int g = 1;
    while (temp != NULL)
    {
        if (g == position - 1)
        {

            Node *gg = temp->next;

            temp->next = loo;
            loo->next = gg;
            break;
        }
        temp = temp->next;
        g++;
    }
}

void deletebypos(Node *&head, int pos)
{
    Node *temp = head;

    int place = 1;
    while (temp != NULL)
    {
        if (pos == 1)
        {
            head = head->next;

            delete temp;

            return;
        }
        if (place == pos - 1)
        {
            Node *removed = temp->next;

            temp->next = removed->next;

            delete removed;

            return;
        }
        temp = temp->next;
        place++;
    }

    cout << "invalid position" << endl;
}

void deletionByValue(Node *&head, int value)
{
    Node *temp = head;

    while (temp != NULL)
    {

        if (temp->data == value)
        {
            if (temp == head)
            {
                head = head->next;

                delete temp;

                return;
            }
            Node *removed = temp->next;

            temp->next = removed->next;

            delete removed;

            return;
        }
        temp = temp->next;
    }

    cout << "Requested value isnt found!" << endl;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    the_flash;

    Node *node1 = new Node(2);

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 1);
    insertAtTail(tail, 3);

    insertAtmiddle(head, 3, 23);

    insertAtmiddle(head, 5, 25);

    print(head);

    Node *curr = head;

    Node *prev = NULL;

    Node *forward = curr->next;
    while (curr != NULL)
    {

        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;

        if(curr==NULL)
        {
            head=prev;
        }
        
    }

    print(head);

    return 0;
}