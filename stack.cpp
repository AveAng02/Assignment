#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

struct node
{
    int n;
    node* link;
};

bool Push(node** ref, int input)
{
    node* a;
    
    a->n = input;
    a->link = *ref;
    
    *ref = a;

    return TRUE;
}

bool Display(node** ref)
{
    if(*ref == NULL)
    {
        return FALSE;
    }
    
    while(ref != NULL)
    {
        cout << (*ref)->n << " ";
        *ref = (*ref)->link;
    }
    
    return TRUE;
}
//push, pop, display 

int main()
{
    node** head;
    int choice = 0, input = 0;
    
    while(choice != 4)
    {
        cout << "Enter your choice:" << endl;
        cout << "------------------\n 1. Push\n 2. Pop\n 3. Display\n 4. Break" << endl;
        cout << "------------------" << endl;
        cin >> choice;
        
        switch(choice)
        {
            case 1:
                cout << "Enter a number: ";
                cin >> input;
                
                if(Push(head, input) == TRUE)
                {
                    cout << "Data Pushed" << endl;
                }
                else
                {
                    cout << "Data couldn't be Pushed" << endl;
                }
                break;
            
            case 2:
                /*if(Pop(head) == TRUE)
                {
                    cout << "Node Deleted" << endl;
                }
                else
                {
                    cout << "Node could not be deleted" << endl;
                }
                break;
                */
                
            case 3:
                Display(head);
                break;
                
            case 4:
                break;
                
            default:
                cout << "Wrong Input!!" << endl;
        }
    }
}

