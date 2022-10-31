#include <iostream>
using namespace std;

int main ()
{
    cout << "how many days did you work this week? ";
    int daysWorked;
    cin >> daysWorked;
    cout << "what is your hourly wage? ";
    double wage;
    cin >> wage;
    double total = 0.0;
    //for loop begins
    for (int counter = 1; counter <= daysWorked; counter++)
    {
        cout << "for day " << counter << ", how many hours did you work? ";
        double dailyHours;
        cin >> dailyHours;
        double totalDay = dailyHours * wage;
        total += totalDay;
    }
    cout << "taxes excluded, you made a total of $" << total << " this week.";
    return 0;
}
