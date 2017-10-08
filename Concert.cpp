#include <string>
#include <ctime>
#include <vector>
#include <iostream>
#include <sstream>
#include "Concert.h"

using namespace std;

    string concertName;
    int desire;
    tm date;
    //vector<string> friends;

    Concert::Concert(){
        concertName = "none";
        friends.clear();
        desire = 0;
        date.tm_year = 1900;
        date.tm_mon = 1;
        date.tm_mday = 1;
    }

    Concert::Concert(string concertName, vector<string> friends, int desire, tm date){
        this->concertName = concertName;
        this->friends = friends;
        this->desire = desire;
        this->date = date;
    }

    string Concert::getName(){
        return concertName;
    }

    int getDesire(){
        return desire;
    }

    tm getDate(){
        return date;
    }

    bool Concert::operator<(const Concert& other) const{

        if(this->date.tm_year < other.date.tm_year){
            return true;
        }else if(this->date.tm_year == other.date.tm_year){
            if(this->date.tm_mon < other.date.tm_mon){
                return true;
            }else if(this->date.tm_mon == other.date.tm_mon){
                if(this->date.tm_mday < other.date.tm_mday){
                    return true;
                }else if(this->desire > other.desire){
                    return true;
                }
            }
        }
        return false;
    }

    ostream& operator<<( ostream& out, const Concert &c) {
        out << c.concertName << ": " << c.date.tm_mon << "/" << c.date.tm_mday << "/" << c.date.tm_year << " Desire: " << c.desire;
        return out;
    }
