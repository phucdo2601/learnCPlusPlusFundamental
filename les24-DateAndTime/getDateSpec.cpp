#include <iostream>
#include <ctime>

using namespace std;

int main() {

    // curnent date/time based on curent system
    time_t now = time(0);

    cout << "Number of sec since January 1, 1970 is :: " << now << endl;

    tm *ltm = localtime(&now);

    //print various components of tm structure
    cout << "Year: " << 1990 + ltm->tm_year <<endl;
    cout << "Month: " << 1 + ltm->tm_mon <<endl;
    cout << "Day: " << ltm->tm_mday <<endl;
    cout << "Time: "<< 5+ltm->tm_hour << ":";
    cout << 30+ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;
}