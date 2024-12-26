#include<iostream>

using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node (int data){
        this->data = data;
        this->next = nullptr;
    }
};
class Linkedlist{
    public:
    Node *head;
    int count;

    Linkedlist(){
        this->head = nullptr;
        this->count = 0;
    }
    void AddAtStart(int data){
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;

        this->count++;
        
    }
    void viewall(){
        if(count == 0){
            cout << "Linked List Is Empty..." <<endl;
            return;
        }
        Node *temp = this->head;
        while (temp != NULL)
        {
           cout << temp->data << endl;
           temp = temp->next;
            
            delete temp;
            temp = nullptr;
        }
        
       
    }
    void deleteAtstart(int data){
        if(this->count == 0 || this->head == nullptr){
            cout << "Linked List Is Empty... " <<endl;
            return ;
        }
        Node * temp = this->head;
        this->head = this->head->next;

        delete temp;
        temp = nullptr;

        this->count--;
    }
    void deleteanyPos(int data,int pos){
        if(this->count == 0 || this->head == nullptr){
            this->deleteAtstart(data);
            cout << "Deleted Element Successfully....." <<endl;
            return;
        }
        if(pos == 0){
            for (int i = 0; i < pos; i++)
            {
              
            }
        
        }
        Node *prev = this->head , *curr = this->head ;
        for (int i = 0; i < pos; i++)
        {
          curr = curr->next;
        }
         for (int i = 0; i < pos - 1; i++)
        {
          prev = prev->next;
        }
        prev->next = curr->next;

        delete curr;
        curr = NULL;

        prev = NULL;
        delete prev;

        this->count--;
        cout << "Deleted Element Successfully.... " <<endl;
        
    }
    void updated(int data){
        if(this->count == 0 || this->head == nullptr){
            cout << "Linked List Is Empty... " <<endl;
            return ;
        }
        Node * temp = head;
        temp = temp->next->next;
    }
  
};


int main(){
    Linkedlist list;
    int choice;

    do
    {
        cout << "----------crud--------" <<endl;
        cout << "1. To Insert At Beginning :- " <<endl;
        cout << "2. To Search At Value :- " <<endl;
        cout << "3. To Delete Any Position :- " <<endl;
        cout << "4. To Update The Value :- " <<endl;
        cout << "5 To View All element :- " <<endl;
        cout << "6. To Exit..........." <<endl;
        cout << "7 To addDelete :- " <<endl;
        cout << "-----------------------" <<endl;

        cout << "Enter Your Choice :- "<<endl;
        cin  >> choice;


        switch (choice)
        {
        case 1:{
            int data;

            cout << "Enter Your Data :- "<<endl;
            cin >> data;

            list.AddAtStart(data);
             break;
        }
        case 2: {
            break;

        }
        case 3:{
            break;

        }
        case 4: {
        
            break;

        }
        case 5: {
            list.viewall();
            break;

        }
        case 6: {
            int data;

            cout << "Enter The Data :- "<<endl;
            cin >> data;

            list.deleteAtstart(data);
        }
           
        case 7 :
             cout << "Thanks For Visiting....." <<endl;
            break;
        
           
        
        default:
            break;
        }

    } while (choice != 6);
    



    return 0;
}