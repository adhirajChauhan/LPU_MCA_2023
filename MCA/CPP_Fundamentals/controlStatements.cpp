#include <iostream>
using namespace std;

int main(){
    //If - else
    // if(condtion){
    //     //if codition is true, this block of code will be executed
    // }
    // else{
    //     //if codition is false, this block of code will be executed
    // }
    // int num = 60;
    // if(num < 20){
    //     cout << "number is less" << endl;
    // }
    // else if(num >= 20 && num <= 100){
    //     cout << "number is between 20 and 100" << endl;
    // }
    // else{
    //     cout << "number is greater" << endl;

    // }

    // int val = 10;

    // switch(val){
    //     case 10:
    //     cout << "Val is 10" << endl;
    //     break;

    //     case 11:
    //     cout << "Val is 11" << endl;
    //     break;

    //     case 12:
    //     cout << "Val is 12" << endl;
    //     break;

    //     default:
    //     cout << "Val is none" << endl;
    //     break;
    // }


    //---------------------------------------LOOPS
    //-----------------For loop

    // for(init;termination;inc/dec){
    //     //body
    // }
    
    // for(int i = 1; i <= 10; i++){
    //     cout << i << endl;
    // }


    // for(int i = 1; i <= 3; i++){
    //     for(int j = 1; j <= 3; j++){
    //         cout << i << " " << j << endl;
    //     }
    // }

    //-----------------while loop
    // int i = 0;

    // while(i <= 10){
    //     cout << i << endl;
    //     i += 2;
    // }

    for(int i = 0; i <= 10; i++){

        if(i == 4)
        {
            continue;
        }
        if(i == 8)
        {
            break;
        }
        cout << i << endl;
    }

}


//Take user input for their age
//if the age is less than 18, print he cannot vote
// else print he can vote


//Do it using switch case
//Take user input for their marks
//if marks are 10 << cout that student has failed
//if mark are 20 << cout that student need improvement
//If marks are 30 << cout that student has passed
//for any other input << cout invalid marks

//using while loop print
// 1 1
// 1 2
// 1 3
// 2 1
// 2 2
// 2 3
// 3 1
// 3 2
// 3 3