#include <string>
#include <ctime>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

class Concert{
    public:
        //Default constructors
        Concert();

        //Constructor with parameters
        Concert(string concertName, vector<string> friends, int desire, tm date);

        //Accessors
        string getName();
        int getDesire();
        tm getDate();

        //Compare Concerts
        bool operator<(const Concert& other) const;

        //give printable concert

        string concertName;
        vector<string> friends;
        int desire;
        tm date;
};

ostream &operator<<(ostream &out, const Concert &c);
