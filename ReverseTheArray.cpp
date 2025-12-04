/*Problem 1: Reverse the Array (Neha’s Diary Entries)
🧩 Problem Story:

Neha keeps a diary of her daily exercise times (in minutes).
She wants to review her progress, but she prefers to see the latest day’s record first.

Write a program to help Neha reverse the order of her recorded exercise times.

✅ Task:

Given n numbers representing Neha’s daily exercise time, print them in reverse order.

🧠 Input Format:

The first line contains an integer n — the number of days.

The second line contains n space-separated integers representing exercise times.
Output Format:

Print the exercise times in reverse order on a single line separated by spaces. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    int time[n];

    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }
    cout << "In Reverse Order -" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << time[i];
        if (i > 0) cout << " ";
    }

    return 0;
}
