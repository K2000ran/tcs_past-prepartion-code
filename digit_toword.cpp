#include <iostream>
#include <string>
using namespace std;

// Arrays to store words for ones, tens, and special two-digit numbers
string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

// Function to convert single digit to words based on its place value
void convertToWords(string num) {
    int len = num.length(); // Get the length of the input

    // If length is 0, the input is empty
    if (len == 0) {
        cout << "Empty" << endl;
        return;
    }

    // If length is greater than 4, we can't process such a large number
    if (len > 4) {
        cout << "Give a string of specific length (1-4)" << endl;
        return;
    }

    // Variable to keep track of the current index in the string
    int index = 0;

    // Handle thousands place (if exists)
    if (len == 4) {
        cout << ones[num[index] - '0'] << " Thousand ";
        index++;
        len--;
    }

    // Handle hundreds place (if exists)
    if (len == 3) {
        if (num[index] != '0') {
            cout << ones[num[index] - '0'] << " Hundred ";
        }
        index++;
        len--;
    }

    // Handle tens place
    if (len == 2) {
        if (num[index] == '1') {
            // Handle special case for numbers between 10 and 19
            cout << teens[num[index + 1] - '0'] << " ";
            return;
        } else if (num[index] != '0') {
            // Regular tens place (20, 30, ..., 90)
            cout << tens[num[index] - '0'] << " ";
        }
        index++;
        len--;
    }

    // Handle ones place (if exists)
    if (len == 1) {
        if (num[index] != '0') {
            cout << ones[num[index] - '0'] << " ";
        }
    }

    cout << endl; // End with a newline
}

int main() {
    string number;
    
    // Taking input as a string from the user
    cout << "Enter a number (0 - 9999): ";
    cin >> number;
    
    // Call the function to convert the number to words
    convertToWords(number);
    
    return 0;
}
