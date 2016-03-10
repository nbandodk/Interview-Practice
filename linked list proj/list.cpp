#include<cstdlib>
#include<iostream>

#include "list.h"

using namespace std;

List::List(){
    
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::addNode(int addData){
    
    nodePtr n = new node;
    n->next = NULL;
    n->data = addData;
    
    if(head != NULL){
        
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = n;
    }
    else{
        head = n;
    }
}

void List::deleteNode(int delData){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    
    while(curr != NULL && curr->data != delData){
        temp = curr;
        curr = curr->next;
    }
    if(curr == NULL){
        cout << delData << " was not in the list\n";
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        if(delPtr == head){
            head = head->next;
            //temp = NULL;
        }
        delete delPtr;
        cout << "The value " << delData << " was deleted.\n";
        
    }
    
}

void List::printList(){
    
    curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
        cout << endl;
    }
}

void List::searchList(int search_value)
{
    if(head == NULL){
        cout << "There are no elements in the linked list.\n";
        exit(0);
    }
        
    
    nodePtr ptr = new node;
    ptr = head;
    
    while(ptr != NULL){
        if(ptr->data == search_value){
            cout << search_value << " is in the linked list.\n";
            break;
        }
        else{
            ptr = ptr->next;
        }
    }
    if(ptr == NULL)
        cout << search_value << " was not found in the linked list.\n";
        
}

int main(int argc, char** argv){
    
    List Ninad;
    
    /* Ninad.addNode(3);
    Ninad.addNode(5);
    Ninad.addNode(7);
    Ninad.addNode(9);
    
    Ninad.printList(); */
    
    Ninad.searchList(2);
    //Ninad.deleteNode(7);
    //Ninad.printList();
    return 0;
}