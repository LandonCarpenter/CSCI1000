#include <iostream>

using namespace std;

int main()

{
    int total_seconds;
    cout << "Enter seconds: " << endl;
    cin >> total_seconds;
    int days = total_seconds/86400;
    int remaining_seconds = total_seconds % 86400;
    int hour = remaining_seconds / 3600;
    remaining_seconds = remaining_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;
    cout << "Time is " << days << " days, " << hour << " hours, " << minutes << " minutes, and " << seconds << " seconds.";




    return 0;
}