//TO-DO LIST
#include<iostream>
#include<stdio.h>
using namespace std;

class Task
{
    public:
    string task;
    string status;
    Task *next;
    Task()
    {
        next=NULL;
    }
    Task(string a)
    {
        task=a;
        status="Incomplete";
        next=NULL;
    }
};
class TODO
{
    Task* first;
    public:
    TODO()
    {
        first=NULL;
    }
    void addTask(string x)
    {
        Task* tmp=new Task(x);
        if(first==NULL)
            first=tmp;
        else
            {
                Task*p=first;
                while(p->next!=NULL)
                    p=p->next;
                p->next=tmp;
            }
        
    }
    void viewTask()
    {
        Task*p=first;
        int i=1;
        while(p)
            {
                cout<<i<<"."<<p->task<<" ("<<p->status<<")\n";
                p=p->next;
                i++;
            }
    }
    void markComplete(int num)
    {
        Task*p=first;
        for(int i=1;i<=num-1;i++)
            p=p->next;
        p->status="Complete";
    }
    void removeTask(int num)
    {
        Task*p=first;
        if(num==1)
            first=p->next;
        else
            {
                for(int i=1;i<num-1;i++)
                    p=p->next;
                p->next=p->next->next;
            }
    }
};
int main()
{
    TODO A;
    string tsk;
    int indx;

    cout<<"Enter 1 To add Task\n";
    cout<<"Enter 2 To view Task\n";
    cout<<"Enter 3 To mark complete Task\n";
    cout<<"Enter 4 To remove Task\n";
    cout<<"Enter 5 To exit Task\n";
    int x;
    
    while(x!=5)
    {
        cout<<"Enter number:";
        cin>>x;
        cin.ignore();
        switch(x)
        {
            case 1:
                cout<<"Enter task to be added...\n";
                getline(cin,tsk);
                A.addTask(tsk);
                break;
            case 2:
                A.viewTask();
                break;
            case 3:
                cout<<"Enter task number to mark it complete...\n";
                cin>>indx;
                cin.ignore();
                A.markComplete(indx);
                break;
            case 4:
                cout<<"Enter task number to be removed...\n";
                cin>>indx;
                cin.ignore();
                A.removeTask(indx);
                break;
            case 5:
                break;
            default:
                cout<<"Invalid Entry!\nTry Again";
        }
    }
    cout<<"Terminating Program...";
    
    return 0;
}
