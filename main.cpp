// #include <iostream>
// #include <cmath>
// using namespace std;
//
// int main() {
//     int N, sum = 0;
//     double average;
//
//     // 1.1 Print the first 10 natural numbers in one row
//     cout << "First 10 natural numbers: ";
//     for (int i = 1; i <= 10; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//
//     // 1.2 Print the first N natural numbers in one row (N from input)
//     cout << "Enter a number for N: ";
//     cin >> N;
//     cout << "First " << N << " natural numbers: ";
//     for (int i = 1; i <= N; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//
//     // 1.3 Print the sum of the first 10 natural numbers
//     sum = 0; // Reset sum
//     for (int i = 1; i <= 10; i++) {
//         sum += i;
//     }
//     cout << "Sum of first 10 natural numbers: " << sum << endl;
//
//     // 1.4 Print the sum of the first N natural numbers (N from input)
//     sum = 0; // Reset sum
//     for (int i = 1; i <= N; i++) {
//         sum += i;
//     }
//     cout << "Sum of first " << N << " natural numbers: " << sum << endl;
//
//     // 1.5 Print the average of the first 10 natural numbers
//     sum = 0; // Reset sum
//     for (int i = 1; i <= 10; i++) {
//         sum += i;
//     }
//     average = sum / 10.0;
//     cout << "Average of first 10 natural numbers: " << average << endl;
//
//     // 1.6 Print the average of the first N natural numbers (N from input)
//     sum = 0; // Reset sum
//     for (int i = 1; i <= N; i++) {
//         sum += i;
//     }
//     average = sum / static_cast<double>(N);
//     cout << "Average of first " << N << " natural numbers: " << average << endl;
//
//     // 2.1 Print odd numbers among the first 10 natural numbers
//     cout << "Odd numbers in first 10 natural numbers: ";
//     for (int i = 1; i <= 10; i++) {
//         if (i % 2 != 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//
//     // 2.2 Print even numbers among the first 10 natural numbers
//     cout << "Even numbers in first 10 natural numbers: ";
//     for (int i = 1; i <= 10; i++) {
//         if (i % 2 == 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//
//     // 2.3 Print odd numbers among the first N natural numbers (N from input)
//     cout << "Enter a number for N: ";
//     cin >> N;
//     cout << "Odd numbers in first " << N << " natural numbers: ";
//     for (int i = 1; i <= N; i++) {
//         if (i % 2 != 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//
//     // 2.4 Print even numbers among the first N natural numbers (N from input)
//     cout << "Even numbers in first " << N << " natural numbers: ";
//     for (int i = 1; i <= N; i++) {
//         if (i % 2 == 0) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
//
//     // 2.5 Print numbers within range 1 to 100 that are divisible by 10
//     cout << "Numbers from 1 to 100 divisible by 10: ";
//     for (int i = 10; i <= 100; i += 10) {
//         cout << i << " ";
//     }
//     cout << endl;
//
//     // 2.6 Print numbers within range 1 to N that are divisible by 10
//     cout << "Enter a number for N: ";
//     cin >> N;
//     cout << "Numbers from 1 to " << N << " divisible by 10: ";
//     for (int i = 10; i <= N; i += 10) {
//         cout << i << " ";
//     }
//     cout << endl;
//
//     // Loop through uppercase ASCII characters (A to Z)
//     int count = 0;
//     for (char ch = 'A'; ch <= 'Z'; ch++) {
//         cout << ch << " ";
//         count++;
//
//
//         if (count % 5 == 0) {
//             cout << endl;
//         }
//     }
//     cout << endl;
//
//     // calculates the factorial of a given positive integer using a for loop
//     long long factorial = 1;
//     cout << "Enter a number: ";
//     int n2;
//     cin >> n2;
//
//
//     if (n2 < 0) {
//         cout << "Factorial of a negative number is not defined." << endl;
//     } else {
//
//         for (int i = 1; i <= n2; ++i) {
//             factorial *= i;
//         }
//
//
//         cout << "Factorial of " << n2 << " is " << factorial << endl;
//     }
//
//     cout << "Enter the size of the square: ";
//     cin >> n2;
//
//     // Loop to print square pattern
//     for (int i = 0; i < n2; i++) {
//         for (int j = 0; j < n2; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     cout << "Enter the number of rows: ";
//     cin >> n2;
//
//
//     for (int i = 1; i <= n2; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//
//     int n;
//     bool isPrime = true;
//
//     cout << "Enter a number: ";
//     cin >> n;
//
//     if (n < 2) {
//         isPrime = false;
//     } else {
//
//         for (int i = 2; i * i <= n; i++) {
//             if (n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }
//
//
//     if (isPrime) {
//         cout << "Number is prime" << endl;
//     } else {
//         cout << "Number is not prime" << endl;
//     }
//     sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//
//
//     for (int i = 1; i <= n; i++) {
//         int square = i * i;
//         cout << i << "*" << i << "=" << square << endl;
//         sum += square;
//     }
//
//     cout << "Sum of the series: " << sum << endl;
//
//
//     int num, countPos = 0, countNeg = 0, total = 0, count1 = 0;
//     double average1 = 0.0;
//
//     cout << "Enter an integer, the input ends if it is 0: ";
//
//     while (true) {
//         cin >> num;
//
//         if (num == 0) break;
//
//         if (num > 0)
//             countPos++;
//         else
//             countNeg++;
//
//         total += num;
//         count1++;
//     }
//
//
//     if (count1 > 0)
//         average1 = static_cast<double>(total) / count;
//
//
//     cout << "The number of positives is " << countPos << endl;
//     cout << "The number of negatives is " << countNeg << endl;
//     cout << "The total is " << total << endl;
//     cout << "The average is " << average1 << endl;
//
//
//
//     int n1 = 0;
//
//    int reversed1 = 0;
//     cout << "Enter a number: ";
//     cin >> n1;
//
//
//     while (n > 0) {
//         cout << n % 10;
//         n /= 10;
//     }
//
//     cout << endl;
//
//
//
//     cout << "Enter the height of the triangle: ";
//     cin >> n;
//
//
//     if (n == 0) {
//         cout << "Depth is 0" << endl;
//     } else {
//
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << j << " ";
//             }
//             cout << endl;
//         }
//     }
//
//
//     long long binary;
//     int decimal = 0, power = 0;
//
//     cout << "Enter a binary number: ";
//     cin >> binary;
//
//     while (binary > 0) {
//         int lastDigit = binary % 10;
//         decimal += lastDigit * pow(2, power);
//         binary /= 10;
//         power++;
//     }
//
//     cout << "The decimal number is " << decimal << endl;
//
//
//
//     return 0;
// }


