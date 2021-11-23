//add an entry
//delete an entry
//find a student 
/* update student details {
        name 
        year
        branch
        phoneno 
        } */
// sort the entry using any one of 3 criteria
#include <iostream>
#include "menu.h"

void printMenu() {
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "|               STUDENT DATABASE MENU                      |" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    
    std::cout << "  0. Exit " << std::endl;
    std::cout << "  1. Print the database " << std::endl;
    std::cout << "  2. Add an entry " << std::endl;
    std::cout << "  3. Delete an entry " << std::endl;
    std::cout << "  4. Update student detail " << std::endl;
    std::cout << "  5. Find an entry by Name " << std::endl;
    std::cout << "  6. Find an entry by Roll no. " << std::endl;
    std::cout << "  7. Sort the database " << std:: endl;
    
}