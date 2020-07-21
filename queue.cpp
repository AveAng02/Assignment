
#include <iostream>

#define SIZE 8

struct queue
{
    int arr[SIZE];
    int front;
    int rear;
    int pos;
};

void enterQ(struct queue *p)
{
    if(p->pos == p->rear)
    {
        std::cout << "Queue Full" << std::endl;
        return;
    }
    
    std::cout << "Enter an Integer" << std::endl;
    std::cin >> p->arr[p->pos];
    p->pos++;
    
    std::cout << "\nThe Queue Now is: ";
    for(int i = p->front; i < p->pos; i++)
    {
        std::cout << p->arr[i] << " ";
    }
    
    std::cout << "\n";
}

void deleteQ(struct queue *p)
{
    if(p->pos == p->front) //checks if the queue is Empty
    {
        std::cout << "Queue Empty" << std::endl;
        return;
    }
    
    for(int i = p->front + 1; i < p->pos; i++)
    {
        p->arr[i-1] = p->arr[i];
    }
    
    p->pos--;
    
    std::cout << "\nThe Queue Now is: ";
    for(int i = p->front; i < p->pos; i++)
    {
        std::cout << p->arr[i] << " ";
    }
    
    std::cout << "\n";
}

void isEmpty(struct queue *p)
{
    if(p->pos > p->front)
    {
        std::cout << "Stack Not Empty" << std::endl;
    }
    else
    {
        std::cout << "Stack Empty" << std::endl;
    }
}

int main()
{
    int choice = 0;
    struct queue q;
    q.front = 0;
    q.pos = 0;
    q.rear = SIZE;
    
    while(choice != 4)
    {
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << " 1.Enter Element \n 2.Delete Element \n 3.Is Empty \n 4.Break" << std::endl;
        std::cout << "---------------------------------------------------" << std::endl;
        
        std::cin >> choice;
        
        switch(choice)
        {
            case 1:
                enterQ(&q);
                break;
            
            case 2:
                deleteQ(&q);
                break;
                
            case 3:
                isEmpty(&q);
                break;
                
            case 4:
                break;
                
            default:
                std::cout << "Wrong Input!!" << std::endl;
        }
    }
    
}