
#include "Student.h"
#include "menu.h"
#include "Node.h"
#include <iostream>
#include <string>

//set data fxn;
using namespace std;
void set_data(Node *ptr) {
    string nm, yr, br, phn;
    std::cout << "Enter the name > ";
    getline(cin, nm);
    
    std::cout << "Enter the year > ";
    cin >> yr;
    std::cout << "Enter the branch > ";
    cin >> br;
    std::cout << "nter the phone number > ";
    cin >> phn;
    
    ptr->s.set_name(nm);
    ptr->s.set_year(yr);
    ptr->s.set_branch(br);
    ptr->s.set_ph(phn);
}

void push(Node *hptr) {
    Node *new_node = new Node();
    new_node->next = NULL;
    set_data(new_node);
    hptr->next = new_node;
}

int main() {
    printMenu();
    Node *hptr = new Node();
    hptr->next = NULL;
    set_data(hptr);
    push(hptr);
    
    Node *ptr = hptr;
    while(ptr->next != NULL) {
        cout << ptr->s;
        cout << endl;
        ptr = ptr->next;
        
    }
    
    return 0;
}