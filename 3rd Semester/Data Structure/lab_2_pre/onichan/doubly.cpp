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

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

void insertAtmiddle(Node *&head, int pos, int d)
{
    Node *second = new Node(d);

    Node *first = head;
    if (pos == 1)
    {
        insertAtHead(head, d);
        return;
    }
    int place = 1;
    while (first != NULL)
    {
        if (place == pos - 1)
        {
            Node *third = first->next;

            // now relation btwn first & second
            first->next = second;
            second->prev = first;

            // rltn betwn second & third

            second->next = third;
            third->prev = second;
        }

        first = first->next;
        place++;
    }
}

void deleteByPos(Node *&head, int pos)
{
    Node* temp=head;

    int place=1;
    if(pos==1)
    {
        head=temp->next;
        head->prev=NULL;
        delete temp;
        return;
    }
    while(temp!=NULL)
    {
        if(place==pos)
        {
        
            Node* first=temp->prev;
            Node* third=temp->next;

            first->next=third;
            third->prev=first;
            delete temp;
            return ;
        }
        temp=temp->next;
        place++;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    int pos = 1;
    while (temp != NULL)
    {
        cout << pos << " ";
        cout << temp->data << " ";
        cout << temp << " ";
        cout << temp->prev << " ";
        cout << temp->next;

        temp = temp->next;
        pos++;
        cout << endl;
    }
    cout << endl;
}
void printBackward(Node* &tail)
{
    Node* temp=tail;

    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->prev;
    }
}
int main()
{
    the_flash;
    Node *node1 = new Node(2);

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 1);
    insertAtTail(tail, 3);
    insertAtmiddle(head, 3, 4);
    deleteByPos(head,1);
    print(head);
    printBackward(tail);
   // cout << node1;

    return 0;
}