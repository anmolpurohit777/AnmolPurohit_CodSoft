//TIC-TAC-TOE GAME
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void printtable(int choice1,int choice2,int player);
void wincondition(char a[9],int player);
int main()
{   
    int choice1=-1,choice2=-1,flag=1,player=1,turn=1;
    int visited[10]={0};
    cout<<"Player 1=X\nPlayer 2=O\n";
    printtable(choice1,choice2,player);
    while(flag!=0)
    {   
        player=(player%2==0)?2:1;
        if(player==1)
            {
                cout<<"Player 1's Turn:";
                cin>>choice1;
                
                while(choice1<1||choice1>9||visited[choice1]==1)
                    {
                        cout<<"Invalid Position Try Again:";
                        cin>>choice1;
                    }
                visited[choice1]=1;
                printtable(choice1,choice2,player);
            }
        else
            {
                cout<<"Player 2's Turn:";
                cin>>choice2;
                
                while(choice2<1||choice2>9||visited[choice2]==1)
                    {
                        cout<<"Invalid Position";
                        cin>>choice2;
                    }
                visited[choice2]=1;
                printtable(choice1,choice2,player);
            }
        player++;
        turn++;
        if(turn==10)
            {
                cout<<"***TIE***";
                exit(0);
            }  
    }
    return 0;
}
void printtable(int choice1,int choice2,int player)
{   
    static char arr[]={49,50,51,52,53,54,55,56,57};
    arr[choice1-1]='X';
    arr[choice2-1]='O';

    cout<<"     |     |     \n";
    cout<<"  "<<arr[0]<<"  |  "<<arr[1]<<"  |  "<<arr[2]<<"  \n";
    cout<<"     |     |     \n";
    cout<<"-----------------\n";
    cout<<"     |     |     \n";
    cout<<"  "<<arr[3]<<"  |  "<<arr[4]<<"  |  "<<arr[5]<<"  \n";
    cout<<"     |     |     \n";
    cout<<"-----------------\n";
    cout<<"     |     |     \n";
    cout<<"  "<<arr[6]<<"  |  "<<arr[7]<<"  |   "<<arr[8]<<"  \n";
    cout<<"     |     |     \n";
    
    wincondition(arr,player);
}
void wincondition(char a[9],int player)
{
    if(a[0]==a[1]&&a[1]==a[2])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[3]==a[4]&&a[4]==a[5])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[6]==a[7]&&a[7]==a[8])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[0]==a[3]&&a[3]==a[6])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[1]==a[4]&&a[4]==a[7])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[2]==a[5]&&a[5]==a[8])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[0]==a[4]&&a[4]==a[8])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else if(a[2]==a[4]&&a[4]==a[6])
        {
            cout<<"Player "<<player<<" WINS!!!";
            exit(0);
        }
    else
        {
            return;
        }
}