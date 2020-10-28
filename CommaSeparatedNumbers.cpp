#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int numbers1[12]; //999,999,999,999
string numbers[12];

//print numbers
string wrt(int test);
bool convert(int test);

int main()
{
    //Get number
    long long int num;
    long long int backup;
    cout << "Enter your number: ";
    cin >> num;
    backup = num;

    //store numbers into array
    long long int temp;
    int counter = 0;
    while(num > 0)
    {
        temp = num % 10;
        numbers1[counter] = temp;
        num = num - temp;
        num = num / 10;
        counter++;
    }
    int test = counter - 1;

    convert(test);

    //print numbers
    string result = wrt(test);
    cout << result;

    return 0;
}

//Convert numbers to strings
bool convert(int test)
{
    for(int i = 0; i <= test; i++)
    {
        stringstream convert;
        convert << numbers1[i];
        numbers[i] = convert.str();
    }
    return true;
}
string wrt(int test)
{
    string result;
    if(test == 11)
    {
        result = numbers[11] + "" + numbers[10] + "" + numbers[9] + "," + numbers[8] + "" + numbers[7] + "" + numbers[6] + "," + numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 10)
    {
        result = numbers[10] + "" + numbers[9] + "," + numbers[8] + "" + numbers[7] + "" + numbers[6] + "," + numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 9)
    {
        result = numbers[9] + "," + numbers[8] + "" + numbers[7] + "" + numbers[6] + "," + numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 8)
    {
        result = numbers[8] + "" + numbers[7] + "" + numbers[6] + "," + numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 7)
    {
        result = numbers[7] + "" + numbers[6] + "," + numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 6)
    {
        result = numbers[6] + "," + numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 5)
    {
        result = numbers[5] + "" + numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 4)
    {
        result = numbers[4] + "" + numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 3)
    {
        result = numbers[3] + "," + numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 2)
    {
        result = numbers[2] + "" + numbers[1] + "" + numbers[0];
    }
    else if(test == 1)
    {
        result = numbers[1] + "" + numbers[0];
    }
    else if(test == 0)
    {
        result = numbers[0];
    }
    return result;
}
