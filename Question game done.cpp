#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

string Answer1;
string skip;
string tryagain;
string Answer2;

void startstatment()
{
    cout << "Hello, Hello. Welcome to Jack's game show There will be a few rounds that you will have to play in this game show\n ";
    cout << "There will be a couple of diffrent chalenges so please take your time and have fun.\n ";
    cout << "\n ";
    cout << "Round 1\n ";
    cout << "This question is going to be guess the word.\n ";
    cout << "This is a kind of species that have beaks, The awnser is a four letter word";
    cout << "\n ";
    cout << "What is the answer?\n ";
}



int main()
{

    startstatment();

tryagain:
    cin >> Answer1;
    if (Answer1 == "bird")
    {

        cout << Answer1 + "  Is the right awnser\n";

    }
    else
    {

        cout << "That is the wrong awnser \n ";
        cout << "\n ";
        cout << "enter t two times to try again\n";

        cin >> skip;
        cin >> tryagain;
        cin >> Answer1;
        if (skip == "s") // press s to skip the question 
        {
            cout << skip;
            goto Question2;
        }

        else if (Answer1 == "bird") // this is the answer
        {

            cout << Answer1 + "  Is the right answer \n";

        }
        else
        {
            cout << "wrong try the game again";

        }

    }

Question2:
    cout << "\n ";
    cout << "\n ";
    cout << "Round 2\n";
    cout << "hello, and welcom to the second round contestant this ound will be a guessing game, ther only rules are you have to guess a number between 1-20.\n";
    cout << "good luck\n";
    cout << "\n ";

    const int MIN_VALUE = 1, // will set the min value
              MAX_VALUE = 20; // set the max

    int random_num, // genaration of a raandom number
        user_num;

    unsigned seed = time(0);

    srand(seed);

    random_num = (rand()) %
        (MAX_VALUE - MIN_VALUE + 1) +
        MIN_VALUE;

   
    cout << "Guess a number between 1 and 20" << endl;
    cin >> user_num;

    while (user_num != random_num)
    {
        cout << "your number is"
            << (user_num < random_num ? 
                " higher." : " lower."); // had to rotate the words as it was mixed up

        cout << "try again: ";

        cin >> user_num; // infinite loop if the answer is not right
              
    }

    cout << "\n Correct  ";
    cout << "Random number = " << random_num;
    cout << "Your guess  = " << user_num;
   
  



    cout << "\n ";
    cout << "\n ";
    cout << "\n ";
    cout << "round 3, this will be a simple riddle.\n ";
    cout << "What has a head and a tail but no body?";
    cout << "\n ";
    cin >> Answer2;
    if (Answer2 == "coin")
    {
        cout << "\n ";
        cout << Answer2 + " That's the awnser welldone, funny Isn't it? no? well onto the next round.\n";
        cout << "\n ";
        cout << "\n ";
        cout << "Well done you completed the game show, I know this is a short one but I hope you had a fun time\n ";
    }
    else
    {

        cout << "try again";
        return 122;

    }
}