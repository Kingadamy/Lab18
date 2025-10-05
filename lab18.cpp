#include <iostream>

using namespace std;

const Node{   // create a struct for the node
    int data;
    node* next;
}

struct Node *head = nullptr; // set head to null

void insert(int n){  // function to insert a new node at the head
    struct Node *newNode = new Node;
    newNode -> data = n;
    newNode -> next = head;
    head = newNode;
}


int main(){

    int choice; // create int to choose to add to head or tail
    
    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;

    cout << "\tChoice: ";
    cin >> choice;

    if (choice == 1){
        // add nodes at head
    } else if (choice == 2){
        // add nodes at tail
    } else {
        cout << "Invalid choice. Try again" << endl;
        return 1;
    }

    double rating;
    string comments;
    char another;

    cout << "Enter review rating 0-5: " << endl;
    cin >> rating;
    cin.ignore();

    cout << "Enter review comments: \n";
    getline(cin, comments);
 

    cout << "Enter another review? Y/N: " << endl;
    cin >> another;
    cin.ignore();

    while (another == 'y' || another == 'Y'){  // while loop to continue adding reviews until user says no
        cout << "Enter review rating 0-5: " << endl;
        cin >> rating;
        cin.ignore();

        cout << "Enter review comments: \n";
        getline(cin, comments);

        cout << "Enter another review? Y/N: " << endl;
        cin >> another;
        cin.ignore();
    }

    cout << "Outputting all reviews: " << endl;





}




// Which linked list method should we use?
//     [1] New nodes are added at the head of the linked list
//     [2] New nodes are added at the tail of the linked list
//     Choice: 2
// Enter review rating 0-5: 4.8
// Enter review comments: Oscar contender
// Enter another review? Y/N: y
// Enter review rating 0-5: 4.1
// Enter review comments: Brilliant lead acting
// Enter another review? Y/N: n
// Outputting all reviews:
//     > Review #1: 4.8: Oscar contender
//     > Review #2: 4.1: Brilliant lead acting
//     > Average: 2.96667