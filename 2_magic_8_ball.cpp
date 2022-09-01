/*
* making a random number generator
* try to get long string to work
* type in a question
* get an answer from magic 8 ball
*/

#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
using namespace std;

void stringCopy (char[], char[]);

int main()
{
    //declare variables
    const int SIZE = 501;                    //limit size to 50 letters only.
    char question[SIZE];                    //set question to size limit.
    char repeat[SIZE];                      //for repeating the question.
    int rng;                                //to choose random answer.

    //asks user to input a question no more than 50 letters
    cout << "Ask 8 ball a question no more than "
         << (SIZE - 1) << " letters.\n\n";
    cin.getline(question,SIZE);
    cout << endl;

    //repeat the question
    stringCopy (question, repeat);

    //repeat and display the question
    cout << "You have asked: " << repeat << endl << endl;

    //set a rng fest
    srand(time(NULL));

    //declare between 1 and 10
    rng = rand() % 10 + 1;

    //set up answers for 8 ball
    cout << "8 Ball answers: ";
    
    if (rng == 1) {
        cout << "High chance of no.\n\n";
    }
    else if (rng == 2) {
        cout << "Pretty sure this is a no.\n\n";
    }
    else if (rng == 3) {
        cout << "Based on my calculation, this is a no.\n\n";
    }
    else if (rng == 4) {
        cout << "Nope, nope, nope, nope.\n\n";
    }
    else if (rng == 5) {
        cout << "Hard no... seriously, no.\n\n";
    }
    else if (rng == 6) {
        cout << "Probably a yes.\n\n";
    }
    else if (rng == 7) {
        cout << "Pretty sure this is a yes.\n\n";
    }
    else if (rng == 8) {
        cout << "Well, yeah, obviously a yes.\n\n";
    }
    else if (rng == 9) {
        cout << "Yes, 100%, definitely a yes.\n\n";
    }
    else if (rng = 10) {
        cout << "That's a yes from me.\n\n";
    }

    //return to main
    return main();
}

//make sure it repeats every single letter.
void stringCopy(char string1[], char string2[]) {
    int index = 0;

    while (string1[index] != '\0') {
        string2[index] = string1[index];
        index++;
    }
    string2[index] != '\0';
}