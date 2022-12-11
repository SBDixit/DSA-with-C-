#include<iostream>
using namespace std;
class Circular_Queue
{
    private:
    int front ;
    int rear;1
    int arr[5];
    int itemcount;

    public :
    Circular_Queue ()
    {
        itemcount=0;
        front =-1;
        rear =-1;
        for(int i=0;i<5;i++)
        {
            arr[i]=0;
        }
    bool isEmpty()
    {
        if(front==-1 && rear ==-1)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
    bool isFull()
    {
        if((rear+1)%5==front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int value)
    {
        if(isFull())
        {
            cout<<"Queue full "<<endl;
            return;
        }
        else if (isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear]=value;
        }
        else
        {
            rear = (rear+1)%5;
            arr[rear]=value;
        }
        itemcount++;
        }
        int dequeue()
        {
            int x=0;
            if(isEmpty())
        {
            cout<<"queue is Empty "<<endl;
            return x;
        }
        else if(rear == front)
        {
            x =arr[rear];
            rear =-1;
            front =-1;
            itemcount--;
            return x;
        }
        else
        {
            cout<<"Front Value : "<<front<<endl;
            x = arr[front];
            arr[front]=0;
            front = (front+1)%5 ;
            itemcount--;
            return x;
        }
    }
    int count()
    {
        return (itemcount);
    }
    void display()
    {
        cout<<"All value in the Queue are - "<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};
int main()
{
    Circular_Queue q1;
    int value , option;
    
    do
    {
    cout<<"\n\nwhat operation do you want to perform ? Select option number.Enter 0 to exit."<<endl;
    cout<<"1. Enqueue()"<<endl;
    cout<<"2. Dequeue()"<<endl;
    cout<<"3. isEmpty()"<<endl;
    cout<<"4. isFull()"<<endl;
    cout<<"5. count()"<<endl;
    cout<<"6. Display()"<<endl;
    cout<<"7. Clear Screen()"<<endl<<endl;
    cin>>option;
    switch(option)
    {
        case 0:
        break;
        case 1:
        cout<<" Enqueue operation \nEnter an item to Enqueue in the queue"<<endl;
        cin>>value;
        q1.enqueue(value);
        break;
        case 2:
        cout<<"Dequeue operation \nEnter an item to Dequeue in the queue"<<endl;
        break;
        case 3:
        if (q1.isEmpty())
        {
        cout<<"Queue is Empty"<<endl;
        }
        else
        {
         cout<<"Queue is not Empty"<<endl;
        }
        case 4:
        if(q1.isFull())
        {
            cout<<"Queue is Full "<<endl;
        }
        else
        {
           cout<<"Queue is not Full"<<endl;
        }
        case 5:
        cout<<"Count Operation \nCount of item in Queue : "<<q1.count ()<<endl;
        break;
        case 6:
        cout<<"Display Function Called : "<<endl;
    q1.display();
    break;
    case 7:
    system("cls");
    break;

    default: 
    cout<<"Enter Froper Option Number "<<endl;
    }
}
    while (option !=0);
return 0;
}