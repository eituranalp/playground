#include <iostream>
#include "SortedType.h"
#include "SortedLinkedList.h"

using namespace std;

int main() {
    SortedType doublyList;
    SortedLinkedList singlyList;

    cout << "Testing SortedType (Doubly Linked List):\n";

    doublyList.insert(10);
    doublyList.insert(5);
    doublyList.insert(20);

    cout << "Inserted 10, 5, 20 into SortedType.\n";
    cout << "Length: " << doublyList.getLength() << endl;

    if (doublyList.search(10))
        cout << "10 found.\n";
    else
        cout << "10 not found.\n";

    doublyList.remove(5);
    cout << "Removed 5. New length: " << doublyList.getLength() << endl;


    cout << "\nTesting SortedLinkedList (Singly Linked List):\n";

    singlyList.insert(30);
    singlyList.insert(25);
    singlyList.insert(35);

    cout << "Inserted 30, 25, 35 into SortedLinkedList.\n";
    singlyList.display();

    if (singlyList.search(25))
        cout << "25 found.\n";
    else
        cout << "25 not found.\n";

    singlyList.remove(25);
    cout << "Removed 25. List now:\n";
    singlyList.display();

    return 0;
}
