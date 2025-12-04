/* Count Positive and Negative Numbers (Weather Sensor Data)
🧩 Problem Story:

A weather station records temperature readings during the day.
Positive readings mean above 0°C, negative readings mean below 0°C, and zero means exactly 0°C.

Your job is to analyze the data and find how many readings are positive, negative, and zero.

Input Format:

The first line contains an integer n — the number of readings.

The second line contains n space-separated integers representing the readings.

🖥 Output Format:

Print three lines as shown:
Positive = x
Negative = y
Zero = z */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter numbers of readings: ";
    cin >> n;

    int readings[n];
    for (int i = 0; i < n; i++) {
        cin >> readings[i];
    }

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (readings[i] > 0)
            positive++;
        else if (readings[i] < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive Numbers = " << positive << endl;
    cout << "Negative Numbers = " << negative << endl;
    cout << "Zeros = " << zero << endl;

    return 0;
}
