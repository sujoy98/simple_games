#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void play_game()
{
    cout << "~~~~Welcome, this is a simple game to Guess a Random Number~~~~"<<endl<<endl;
    int usr_num;
    cout << "Emter a random number : "<< endl;
    cin >> usr_num;
    int random_num = rand() % 51; // % 10 is to limit the range upto 10 because if 11 it will terminate because it will a perfect division like 11/11 remainder is zero
    cout << "THE RANDOM NUM IS :-- "<<random_num << endl;
    if(random_num == usr_num)
    {
        cout << "CONGRATULATION!! YOU WIN!!"<< endl <<endl << "Gnerated number : " << random_num << endl << "Your entered number :" << usr_num<<endl<<endl;
    }else{
        cout << "SORRY :( YOU LOOSE TRY AGAIN "<< endl <<endl << "Gnerated number :" << random_num <<endl << "Your number :" << usr_num<<endl<<endl;
    }

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
