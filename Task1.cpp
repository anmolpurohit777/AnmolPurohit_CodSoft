//NUMBER GUESSING GAME
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int num=rand()%(100+1);
    int guess;
    int tries=0;

    cout<<"Guess the number between 1 and 100: ";

    do
    {
        cin>>guess;
        tries++;
        if (guess>num)
            cout<<"Too high!Try again:";
         else if (guess < num)
            cout << "Too low!Try again:";  
    } while (guess!=num);

    cout<<"Congratulations! You guessed the correct number "<< num<<" in "<< tries <<" tries.";

    return 0;
}