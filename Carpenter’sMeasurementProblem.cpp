/*The Carpenter’s Measurement Problem

Problem Story:
A carpenter named Mohan is cutting two wooden planks of different lengths.
He wants to cut both planks into smaller equal pieces without any leftover wood.
To do this, he needs to find the greatest common divisor (GCD) of the two lengths.
He also wants to know the least common multiple (LCM) — the smallest length at which both planks can be exactly aligned if placed end to end repeatedly.

Can you help Mohan calculate both the GCD and LCM of the given two lengths?
Task:
Write a program that takes two integers as input and:

Calculates the GCD (Greatest Common Divisor) of the two numbers.

Calculates the LCM (Least Common Multiple) of the two numbers.
Input Format:
The first line contains two integers — the lengths of the two planks.

Output Format:
Print two lines:
First line: "GCD = <value>"
Second line: "LCM = <value>" */

#include <iostream>
using namespace std;

int main() {
    int a, b, gcd, lcm;
    
    // Input two plank lengths
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    int x = a, y = b;
    
    // Calculate GCD using Euclidean algorithm
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    // Calculate LCM
    lcm = (x * y) / gcd;
    
    // Output results
    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;
    
    return 0;
}
