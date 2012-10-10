#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
This program shows a sequence of numbers.
The program then asks for the next number in the sequence.
If the person playing the game gets it right the program prints out
That the user got the right number.  Once the user gets the right answer, the user is allowed to guess again
However the user will no longer be able to get the right answer.
If the person playing gets it wrong the game tells the person playing to guess again.
A tally is kept of how many right and how many wrong the user gets.


Sample output:

The values 2,3 form two consecutive
    elements of a numerical sequence.
What is the next value? 4
You got it wrong!
Would you like to guess again? Y
What is the next value? 5
You got it right!
Your score for this session is 0 Bye
<<program ends>>

*/

int main(){


    //declare all variables
    char usr_rsp = 'Y'; //stands for user response
    //if usr_rsp is y then game keeps going, if it is 'n' or 'N' game ends
    int guess = 0; // the initialization of the guess of the sequence
    //0 is chosen because none of the sequences start with 0
    int number_of_tries = 0; //the number of tries a player has guessed
    int correct_guess = 0; //the correct number of guesses for each player
    bool end = false; // a flag that signifies to the program that the loop should not
    //continue and the program should end.

    const int sequence_size = 18;
    //initializes all the arrays to be used as possible sequences
    int Fibonacci[sequence_size];
    int Lucas[sequence_size];
    int Pell[sequence_size];
    int Triangular[sequence_size];
    int Square[sequence_size];
    int Pentagonal[sequence_size];

    int iterF;//iterator
    //initialize Fibonacci sequence
    Fibonacci[0] = 1;
    Fibonacci[1] = 1;
    for(iterF = 2;iterF <=sequence_size;iterF++){

        Fibonacci[iterF] = Fibonacci[iterF-1] + Fibonacci[iterF -2];
    }
    int iterL;
    Lucas[0] = 1;
    Lucas[1] = 3;
    for(iterL = 2;iterL<=sequence_size;iterL++){

        Lucas[iterL] = Lucas[iterL-1] + Lucas[iterL-2];
    }
    int iterP;
    Pell[0] = 1;
    Pell[1] = 3;
    for(iterP = 2;iterP<=sequence_size;iterP++){

        Lucas[iterP] = Lucas[iterP-2] + 2*Lucas[iterP-1];
    }
    int iterT;
    Triangular[0] = 1;
    for(iterT = 1;iterT<=sequence_size;iterT++){
        Triangular[iterT] = Triangular[iterT - 1] + iterT;
    }
     int iterS;//iterator
    //initialize Fibonacci sequence
    for(iterS = 0;iterS <=sequence_size;iterS++){

        Square[iterS] = iterS * iterS;
    }
     int iterPe;//iterator
    //initialize Fibonacci sequence
    Pentagonal[0] = 1;
    for(iterPe = 1;iterPe <=sequence_size;iterPe++){

        Pentagonal[iterPe] = (3*(iterPe*iterPe)-iterPe)/2;
    }
    int sequence[sequence_size]; //a specific sequence is loaded into this array which is used through out the
    //user interaction of the program
    srand( time(NULL) ); //initializes your random variable
    int sequence_chooser = rand() % 6; //sets random variable to 1 of 6 possible numbers
    switch(sequence_chooser){
//switch statement decides which case to carry out.
        case 0:
            int k;
            for(k = 0;k<=sequence_size;k++){
                sequence[k]=Fibonacci[k];
            }
            break;
        case 1:
             int r;
            for(r = 0;r<=sequence_size;r++){
                sequence[r]=Lucas[r];
            }
            break;
        case 2:
             int q;
            for(q = 0;q<=sequence_size;q++){
                sequence[q]=Pell[q];
            }
            break;
        case 3:
         int b;
            for(b = 0;b<=sequence_size;b++){
                sequence[b]=Triangular[b];
            }
            break;
        case 4:
         int x;
            for(x = 0;x<=sequence_size;x++){
                sequence[x]=Square[x];
            }
            break;
        case 5:
             int w;
            for(w = 0;w<=sequence_size;w++){
                sequence[w]=Pentagonal[w];
            }
            break;
        default:
            cout << "\nerror! sequence not selected!!!\n";
    }
    //loops until the user tells the program to stop
    while(end == false){
    cout << "The values " << sequence[0+correct_guess] <<","<<sequence[1+correct_guess]<<" form two consecutive"
    << "\n\t"
    <<"elements of a numerical sequence.";
//first output the user sees.
    cout << "What is the next value? ";
    cin >> guess;
    number_of_tries++;
    //starts the guessing
    if( correct_guess+2 == sequence_size+1){ //if everything in the sequence has been guessed this code is run.
        //this code ends the game and tells the player then have correctly figured out all possible elements of the sequence
        correct_guess++;
        cout <<"\n"
        <<"You guessed the whole series!\n";

         cout << " You have guessed: "
         << number_of_tries << endl
         << " And you got it right "
         << correct_guess;
         if ( correct_guess == 1){
            cout<< " once";
         }
         else{
         cout << " times"
         <<endl;
         }
        return 0;
    }
    if (guess == sequence[2+correct_guess] ){
        //this code is executed if a single guess is correct.
        correct_guess++;
        cout << "You got it right!\n";
        cout << "Would you like to guess the next number?";
        cin >> usr_rsp;
        if (usr_rsp == 'N' || usr_rsp == 'n' ){
            end = true;
        }
    }
    else{//this code is executed if the user got it wrong.
        cout << "You got it wrong!\n"
         << "Would you like to guess again?";
        cin >> usr_rsp;
        if (usr_rsp == 'N' || usr_rsp == 'n' ){//asks the user if he/she wants to quit the game
            end = true;
        }
    }


}
//prints out everything the user tried.
         cout << " You have guessed: "
         << number_of_tries << endl
         << " And you got it right "
         << correct_guess;
         if ( correct_guess == 1){
            cout<< " once";
         }
         else{
            cout << " times"
            <<endl;
         }




    return 0;

}
