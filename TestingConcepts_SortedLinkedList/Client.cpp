#include <iostream>
#include "SortedType.h"

void printMenu() {
    std::cout << "\n=== Sorted Doubly Linked List Menu ===\n";
    std::cout << "1. Insert an item\n";
    std::cout << "2. Remove an item\n";
    std::cout << "3. Search for an item\n";
    std::cout << "4. Get list length\n";
    std::cout << "5. Clear list\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    SortedType list;
    int choice;

    do {
        printMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                list.insert(value);
                std::cout << value << " inserted.\n";
                break;
            }
            case 2: {
                int value;
                std::cout << "Enter value to remove: ";
                std::cin >> value;
                if (list.remove(value)) {
                    std::cout << value << " removed.\n";
                } else {
                    std::cout << value << " not found.\n";
                }
                break;
            }
            case 3: {
                int value;
                std::cout << "Enter value to search: ";
                std::cin >> value;
                Node* result = list.search(value);
                if (result != nullptr) {
                    std::cout << value << " found in the list.\n";
                } else {
                    std::cout << value << " not found.\n";
                }
                break;
            }
            case 4: {
                std::cout << "List length: " << list.getLength() << "\n";
                break;
            }
            case 5: {
                list.clear();
                std::cout << "List cleared.\n";
                break;
            }
            case 0:
                std::cout << "Exiting program...\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
