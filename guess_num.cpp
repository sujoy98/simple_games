#include <iostream>
#include <cstdlib>
#include <ctime>//to import time from system
using namespace std;
void printarray(int guesses[],int guess_count)
{
    for(int i=0;i<guess_count;i++)
    {
        cout<<guesses[i]<<"\t";
    }
    cout<<endl;
    cout<<"Number of guesses : "<<guess_count<<endl;
}
void play_game()
{
    cout << "~~~~Welcome, this is a simple game to Guess a Random Number between 1-50~~~~"<<endl<<endl;
    int random_num=rand() % 51;     // % 51 is to limit the range upto 50 because if 51 it will terminate because it will a perfect division like 11/11 remainder is zero
    int guesses[51];
    int guess_count = 0;
    while(true)
    {
    int usr_num;
    cout << "Emter a random number : "<< endl;
    cin >> usr_num;
    guesses[guess_count++] = usr_num;//storing the user inputs in to the array, guess_count++ is to increment the array positions
    // guess_count++ or we can increment guess_count in the previous line
    if(random_num == usr_num)
    {
        cout << "CONGRATULATION!! YOU WIN!!"<< endl<<" Gnerated number : "<< random_num << " Entered number : "<< usr_num <<endl<<endl;
        break;
    }else if(usr_num < random_num)
    {
        cout<<"Too low"<<endl;
    }else if(usr_num > random_num)
    {
        cout<<"Too high"<<endl;
    }
    }
    printarray(guesses,guess_count);
    }
int main()
{
    srand(time(NULL)); // to avoid rand() to give same output everytime to fix that we are seeding a random input form system time
    int choice;
    do
    {
        cout << "~~~~ENTER YOUR CHOICE~~~~" << endl << endl;
        cout << "Press 0 to quit "<< endl << "Press 1 to start the game " << endl << endl;
        cin >> choice;
        switch(choice)
        {
            case 0 :
                cout << "Thanks for playing." << endl << endl;
                break;
            case 1 :
                play_game();
                break;
         }

    }
    while(choice != 0);
    return 0;
}
