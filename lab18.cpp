#include <iostream>

using namespace std;

const Node{   // create a struct for the node
   double rating;
   string comments;
    node* next;
}

struct Node *head = nullptr; // set head to null


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
    // output all reviews here
    // make sure to output review number, rating, and comments in same format as example
    // calculate and output average rating


}


void addAtHead(double rating, string comments){
    struct Node *newNode = new Node; // create it here
    newNode -> rating = rating; // input data
    newNode -> comments = comments; //input data
    newNode -> next = head; // point new node to head
    head = newNode; // move head to point to new node

}

void addAtTail(double rating, string comments){
    struct Node *newNode = new Node; // create it here
    newNode -> rating = rating; // input data
    newNode -> comments = comments; //input data
    newNode -> next = nullptr; // point new node to tail
    nullptr = newNode; // move head to point to new node

    if(head == nullptr) { //check if list is empty
        head = newNode; // if it is then we set head to new node
    }
    else {
        struct Node *temp = head; // create a temp node to traverse the list
        while(temp -> next != nullptr){ // here we need to reach the last node
            temp = temp -> next; // move to next node
        }
        temp -> next = newNode; // point last node to new node
    }
}