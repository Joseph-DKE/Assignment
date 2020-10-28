#include <iostream>

using namespace std;

int main()
{
    int numbers[10000];

    //Get Numbers
    long long int num;
    long long int backup;
    cout << "ENTER YOUR NUMBER: ";
    cin >> num;
    backup = num;

    //store each digit in an array
    long long int temp;
    int counter = 0;
    while(num > 0)
    {
        temp = num % 10;
        numbers[counter] = temp;
        num = num - temp;
        num = num / 10;
        counter++;
    }

    //reverse numbers
    long long int check_palindrome = 0;
    for(int i = 0; i < counter; i++)
    {
        check_palindrome = check_palindrome + numbers[i];
        check_palindrome = check_palindrome * 10;
    }
    check_palindrome = check_palindrome / 10;

    //check palindrome
    int degree = 1;
    if(backup == check_palindrome)
    {
        cout << backup << " is already a palindrome so nothing must be appended" << endl;
    }
    else
    {
        for(int i = 0; i < counter; i++)
        {
            degree *= 10;
        }
        long long int palindrome = (backup * degree) + check_palindrome;
        cout << "We append " << check_palindrome << " to make " << backup << " a palindrome" << endl;
        cout << "Palindrome = " << palindrome <<endl;
        cout << "Number appended is: " << check_palindrome << endl;
    }

    return 0;
}
