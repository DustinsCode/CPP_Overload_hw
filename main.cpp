/**
* Class Writing & Operand Overloading HW
*
* @author Dustin Thurston
* @date 10/8/2017
**/

#include <string>
#include <vector>
#include <ctime>
#include <iostream>
#include "Concert.h"

using namespace std;

int main(int argc, char** args){

    vector<string> friends(2);
    friends[0] = "Ian";
    friends[1] = "Cameron";

    tm date;

    //Create 10 concerts
    date.tm_year = 2017;
    date.tm_mon = 12;
    date.tm_mday = 7;
    Concert c1("Ok Go", friends, 9, date);

    date.tm_year = 2018;
    date.tm_mon = 1;
    date.tm_mday = 23;
    Concert c2("The Black Keys", friends, 10, date);

    date.tm_year = 2018;
    date.tm_mon = 7;
    date.tm_mday = 4;
    Concert c3("Las Aves", friends, 7, date);

    date.tm_year = 2017;
    date.tm_mon = 12;
    date.tm_mday = 7;
    Concert c4("Mother Mother", friends, 6, date);

    date.tm_year = 2020;
    date.tm_mon = 5;
    date.tm_mday = 24;
    Concert c5("Avenged Sevenfold", friends, 8, date);
    
    date.tm_year = 2017;
    date.tm_mon = 10;
    date.tm_mday = 10;
    Concert c6("Jukebox the Ghost", friends, 10, date);

    date.tm_year = 2017;
    date.tm_mon = 12;
    date.tm_mday = 8;
    Concert c7("Sylvan Esso", friends, 9, date);

    date.tm_year = 2018;
    date.tm_mon = 5;
    date.tm_mday = 23;
    Concert c8("La Dispute", friends, 10, date);

    date.tm_year = 2017;
    date.tm_mon = 11;
    date.tm_mday = 13;
    Concert c9("Haywyre", friends, 6, date);

    date.tm_year = 2017;
    date.tm_mon = 5;
    date.tm_mday = 4;
    Concert c0("Weezer", friends, 7, date);

    //Put concerts into array to be sorted
    vector<Concert> concerts(10);
    concerts[0] = c0;
    concerts[1] = c1;
    concerts[2] = c2;
    concerts[3] = c3;
    concerts[4] = c4;
    concerts[5] = c5;
    concerts[6] = c6;
    concerts[7] = c7;
    concerts[8] = c8;
    concerts[9] = c9;

    /**
     * Sort and print the concerts
     * */
    sort (concerts.begin(), concerts.begin()+10);
    
    for(int i = 0; i < concerts.size(); i++){
        cout << concerts[i] << endl;
    }
}