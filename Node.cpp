#include "Node.h"
#include <iostream>
#include <string>

//set data fxn;

void set_data(Node *ptr) {
    std::string nm, yr, br, phn;
    std::cout << "Enter the name > ";
    getline(std::cin,nm);
    std::cout << "\nEnter the year > ";
    std::cin >> yr;
    std::cout << "\nEnter the branch > ";
    std::cin >> br;
    std::cout << "\nEnter the phone number > ";
    std::cin >> phn;
    ptr->s.set_name(nm);
    ptr->s.set_year(yr);
    ptr->s.set_branch(br);
    ptr->s.set_ph(phn);
}

void push(Node *hptr) {
    Node *new_node = new Node();
    if(hptr == nullptr) {
        hptr = new_node;
        new_node = nullptr;
        
        hptr->next = nullptr;
        set_data(hptr);
    }
}
