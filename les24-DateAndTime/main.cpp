#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // get current date base on current system
    time_t now = time(0);

    // covert now to string form
    char* dt = ctime(&now);
    cout << "The local date and time is: " << dt << endl;

    //convert now to tm struct for UTC:
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is: " << dt << endl;
}