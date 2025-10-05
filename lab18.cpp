#include <iostream>

using namespace std;

struct Node{   // create a struct for the node
   double rating;
   string comments;
   Node* next;
};

struct Node *head = nullptr; // set head to null

void addAtHead(double rating, string comments); // function prototype to add at head
void addAtTail(double rating, string comments); // function prototype to add at tail
void display(); // function prototype to display the list

int main(){

    int choice; // create int to choose to add to head or tail
    
       
    char another;
    double rating;
    string comments;

    cout << "Which linked list method should we use?" << endl;
    cout << "\t[1] New nodes are added at the head of the linked list" << endl;
    cout << "\t[2] New nodes are added at the tail of the linked list" << endl;

    cout << "\tChoice: ";
    cin >> choice;

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

        if (choice == 1){
        addAtHead(rating, comments); // call function to add at head
    } else if (choice == 2){
        addAtTail(rating, comments);
        // add nodes at tail
    } else {
        cout << "Invalid choice. Try again" << endl;
        return 1;
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

void display(){ //display outputs now
    struct Node *temp = head; // transverse the list
    while(temp != nullptr){}
        cout << temp -> rating << endl; // output rating
        cout << temp -> comments << endl; // output comments
        temp = temp -> next; // move to next node
}

