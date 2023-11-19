#include<iostream>
#include<stdlib.h>
using namespace std;

class node {
public:
    int data;
    node *my_next_nod;
    node *prev;

    node(int data) {
        this->data = data;
        this->my_next_nod = NULL;
        this->prev = NULL;
    }
};

node *n1 = new node(1);
node *head = n1;

void insert_front(int key) {
    node *current = new node(key);
    current->my_next_nod = head;
    current->prev = NULL;
    if (head != NULL) {
        head->prev = current;
    }
    head = current;
}

void insert_back(int key) {
    node *current = new node(key);
    current->my_next_nod = NULL;
    node *TEMPORARY = head;
    while (TEMPORARY->my_next_nod != NULL) {
        TEMPORARY = TEMPORARY->my_next_nod;
    }
    TEMPORARY->my_next_nod = current;
    current->prev = TEMPORARY;
}

void Insert_after_node(int key, int v) {
    bool is_found = false;
    node *current = new node(key);
    node *TEMPORARY = head;
    while (TEMPORARY != NULL) {
        if (TEMPORARY->data == v) {
            node *temp2 = TEMPORARY->my_next_nod;
            if (temp2 != NULL) {
                temp2->prev = current;
            }
            TEMPORARY->my_next_nod = current;
            current->prev = TEMPORARY;
            current->my_next_nod = temp2;
            is_found = true;
            break;
        }
        TEMPORARY = TEMPORARY->my_next_nod;
    }

    if (!is_found) {
        cout << "node not found" << endl;
    }
}

void update_node(int key, int v) {
    bool is_found = false;
    node *TEMPORARY = head;
    while (TEMPORARY != NULL) {
        if (TEMPORARY->data == v) {
            TEMPORARY->data = key;
            is_found = true;
            break;
        }
        TEMPORARY = TEMPORARY->my_next_nod;
    }

    if (!is_found) {
        cout << "node not found" << endl;
    }
}


void remove_node(int key) {
    bool is_found = false;
    node *TEMPORARY = head;
    while (TEMPORARY != NULL) {
        if (TEMPORARY->data == key) {
            if (TEMPORARY->prev != NULL) {
                TEMPORARY->prev->my_next_nod = TEMPORARY->my_next_nod;
            } else {
                head = TEMPORARY->my_next_nod;
            }
            if (TEMPORARY->my_next_nod != NULL) {
                TEMPORARY->my_next_nod->prev = TEMPORARY->prev;
            }
            delete TEMPORARY;
            is_found = true;
            break;
        }
        TEMPORARY = TEMPORARY->my_next_nod;
    }

    if (!is_found) {
        cout << "node not found" << endl;
    }
}


void remove_head() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node *TEMPORARY = head;
    head = head->my_next_nod;

    if (head != NULL) {
        head->prev = NULL;
    }

    delete TEMPORARY;
}


void remove_end() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    node *TEMPORARY = head;
    while (TEMPORARY->my_next_nod != NULL) {
        TEMPORARY = TEMPORARY->my_next_nod;
    }

    if (TEMPORARY->prev != NULL) {
        TEMPORARY->prev->my_next_nod = NULL;
    } else {
        head = NULL;
    }

    delete TEMPORARY;
}


void print() {
    cout << "status: ";
    node *tempForward = head;
    while (tempForward != NULL) {
        cout << tempForward->data << " ";
        tempForward = tempForward->my_next_nod;
    }
    cout << endl;
}



int main() {
    insert_front(3);
    insert_back(5);

    while (true) {
        cout << "Please input a number: ";
        int bash;
        cin >> bash;

        if (bash == 8) {
            break;
        } else if (bash == 1) {
            int key;
            cin >> key;
            insert_front(key);
            print();
        } else if (bash == 2) {
            int key;
            cin >> key;
            insert_back(key);
            print();
        } else if (bash == 3) {
            int key, v;
            cin >> key >> v;
            Insert_after_node(key, v);
            print();
        } else if (bash == 4) {
            int key, v;
            cin >> key >> v;
            update_node(key, v);
            print();
        } else if (bash == 5) {
            remove_head();
            print();
        } else if (bash == 6) {
            int key;
            cin >> key;
            remove_node(key);
            print();
        } else if (bash == 7) {
            remove_end();
            print();
        } else if (bash == 0) {
            print();
        }
    }

    return 0;
}

