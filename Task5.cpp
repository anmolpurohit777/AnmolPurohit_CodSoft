//MOVIE TICKET BOOKING SYSTEM
#include<iostream>
#include<iomanip>
using namespace std;
class Movie
{
    double price;
    int a[5][15];
    public:
    Movie()
    {
        int num=1;
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<15;j++)
                    {
                        a[i][j]=num;
                        num++;
                    }
            }
    }
    void setPrice(double x)
    {
        price=x;
    }
    double getPrice()
    {
        return price;
    }
    void showSeats()
    {
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<15;j++)
                    {
                        if(a[i][j]>=1 && a[i][j]<=75)
                            cout<<a[i][j]<<setw(10);
                        else
                            cout<<"X"<<setw(10);
                    }
                cout<<"\n";
            }
    }
    void bookSeats()
    {
        int n,m,x;
        double T_amt;
        
        cout<<"Enter Total Seats to be booked :";
        cin>>x;
        cout<<"Enter Seat numbers:\n";
        int num=0;
        while(num!=x)
            {
                cin>>n;
                m=0;
                while(n>0)
                    {
                        n-=15;
                        m++;
                    }
                n+=14;
                m-=1;
                if(a[m][n]>=1 && a[m][n]<=75)
                    {
                        
                        a[m][n]=-1;
                        num++;
                    }
                else
                    {
                        cout<<"Invalid Seat Input! Try Again!\n";
                    }
            }
        cout<<"Successfully Booked All Seats\n";
        T_amt=price*x;
        cout<<"Total Amount="<<T_amt<<"\n";
    }
};
int main()
{
    Movie A[5];
    A[0].setPrice(170);
    A[1].setPrice(210);
    A[2].setPrice(150);
    A[3].setPrice(190);
    A[4].setPrice(270);
    int terminate;
    for(int i=0;i<5;i++)
    {
        cout<<"Movie "<<i+1<<"-"<<A[i].getPrice()<<"$"<<"\n";
    }
    
    while(terminate!=2)
    {
        cout<<"Enter 1 to choose movie\n";
    cout<<"Enter 2 to end program\n";
        int no;
        cin>>terminate;
        switch(terminate)
        {
            case 1:
                cout<<"Enter Movie Number:";
                cin>>no;
                A[no-1].showSeats();
                A[no-1].bookSeats();
                A[no-1].showSeats();
            case 2:
                break;
            default:
                "Invalid Entry\n";
        }
    }
    return 0;
}