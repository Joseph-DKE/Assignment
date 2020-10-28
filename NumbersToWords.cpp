#include <iostream>

//haha!!! I spent 19 hours on this

using namespace std;

string names(int x);
string tens(int x);
string others(int test);
// string name1 = names(3); is how to use the array of names

string tentest();
bool firstanswer(int u, int i);

//print numbers

int numbers[12]; //999,999,999,999
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
        numbers[counter] = temp;
        num = num - temp;
        num = num / 10;
        counter++;
    }
    int test = counter - 1;

    //print numbers
    if(test == 11)
    {
        if(numbers[6] + numbers[7] + numbers[8] != 0)
        {
            firstanswer(11, 9);
            cout << " BILLION ";
            firstanswer(6, 6);
            cout << " MILLION ";
        }
        else
        {
            firstanswer(11, 9);
            cout << " BILLION ";
        }
        if(numbers[3] + numbers[4] + numbers[5] != 0)
        {
            firstanswer(5, 3);
            cout << " THOUSAND ";
            firstanswer(2, 0);
            return 0;
        }
        else
        {
            firstanswer(2, 0);
            return 0;
        }
    }
    else if(test == 10)
    {
        if(numbers[6] + numbers[7] + numbers[8] != 0)
        {
            firstanswer(10, 9);
            cout << " BILLION ";
            firstanswer(6, 6);
            cout << " MILLION ";
        }
        else
        {
            firstanswer(10, 9);
            cout << " BILLION ";
        }
        if(numbers[3] + numbers[4] + numbers[5] != 0)
        {
            firstanswer(5, 3);
            cout << " THOUSAND ";
            firstanswer(2, 0);
            return 0;
        }
        else
        {
            firstanswer(2, 0);
            return 0;
        }
    }
    else if(test == 9)
    {
        if(numbers[6] + numbers[7] + numbers[8] != 0)
        {
            firstanswer(9, 9);
            cout << " BILLION ";
            firstanswer(6, 6);
            cout << " MILLION ";
        }
        else
        {
            firstanswer(9, 9);
            cout << " BILLION ";
        }
        if(numbers[3] + numbers[4] + numbers[5] != 0)
        {
            firstanswer(5, 3);
            cout << " THOUSAND ";
            firstanswer(2, 0);
            return 0;
        }
        else
        {
            firstanswer(2, 0);
            return 0;
        }
    }
    else if(test == 8)
    {
        if(numbers[3] + numbers[4] + numbers[5] != 0)
        {
            firstanswer(8, 6);
            cout << " MILLION ";
            firstanswer(5, 3);
            cout << " THOUSAND ";
            firstanswer(2, 0);
            return 0;
        }
        else
        {
            firstanswer(8, 6);
            cout << " MILLION ";
            firstanswer(2, 0);
            return 0;
        }
    }
    else if(test == 7)
    {
        if(numbers[3] + numbers[4] + numbers[5] != 0)
        {
            firstanswer(7, 6);
            cout << " MILLION ";
            firstanswer(5, 3);
            cout << " THOUSAND ";
            firstanswer(2, 0);
            return 0;
        }
        else
        {
            firstanswer(7, 6);
            cout << " MILLION ";
            firstanswer(2, 0);
            return 0;
        }
    }
    else if(test == 6)
    {
        if(numbers[3] + numbers[4] + numbers[5] != 0)
        {
            firstanswer(6, 6);
            cout << " MILLION ";
            firstanswer(5, 3);
            cout << " THOUSAND ";
            firstanswer(2, 0);
            return 0;
        }
        else
        {
            firstanswer(6, 6);
            cout << " MILLION ";
            firstanswer(2, 0);
            return 0;
        }

    }
    else if(test == 5)
    {
        firstanswer(5, 3);
        cout << " THOUSAND ";
        firstanswer(2, 0);
        return 0;
    }
    else if(test == 4)
    {
        firstanswer(4, 3);
        cout << " THOUSAND ";
        firstanswer(2, 0);
        return 0;
    }
    else if(test == 3)
    {
        firstanswer(3, 3);
        cout << " THOUSAND ";
        firstanswer(2, 0);
        return 0;
    }
    else if(test == 2)
    {
        firstanswer(2, 0);
        return 0;
    }
    else if(test == 1)
    {
        firstanswer(1, 0);
        return 0;
    }
    else if(test == 0)
    {
        firstanswer(0, 0);
        return 0;
    }
    else
    {
        cout << "ZERO";
        return 0;
    }
}

//Array to save name of numbers
string names(int x)
{
    string names[20];
    names[0] = "";
    names[1] = "ONE";
    names[2] = "TWO";
    names[3] = "THREE";
    names[4] = "FOUR";
    names[5] = "FIVE";
    names[6] = "SIX";
    names[7] = "SEVEN";
    names[8] = "EIGHT";
    names[9] = "NINE";

    return names[x];
}

//Array to save name of 10s
string tens(int x)
{
    string tens[21];
    tens[10] = "TEN";
    tens[11] = "ELEVEN";
    tens[12] = "TWELVE";
    tens[13] = "THIRTEEN";
    tens[14] = "FOURTEEN";
    tens[15] = "FIFTEEN";
    tens[16] = "SIXTEEN";
    tens[17] = "SEVENTEEN";
    tens[18] = "EIGHTEEN";
    tens[19] = "NINETEEN";
    tens[2] = "TWENTY";
    tens[3] = "THIRTY";
    tens[4] = "FORTY";
    tens[5] = "FIFTY";
    tens[6] = "SIXTY";
    tens[7] = "SEVENTY";
    tens[8] = "EIGHTY";
    tens[9]  = "NINTY";

    return tens[x];
}

string tentest(int i)
{
    if(numbers[i + 1] > 1)
    {
        return tens(numbers[i + 1]) + " " + names(numbers[i]);
    }
    else
    {
        int temp1 = (numbers[i + 1] * 10) + numbers[i];
        return tens(temp1);
    }
}
bool firstanswer(int u, int i)
{
    if(u == i)
    {
        cout << names(numbers[i]);
        return true;
    }
    else if(u == i + 1)
    {
        string result = tentest(i);
        cout << result;
        return true;
    }
    else if(u == i + 2)
    {
        if(numbers[i + 1] == 0 && numbers[i] == 0 && numbers[i + 2] != 0)
        {
            cout << names(numbers[i + 2]) << " HUNDRED";
            return true;
        }
        else if(numbers[i + 1] == 0 && numbers[i] == 0 && numbers[i + 2] == 0)
        {
            return true;
        }
        else if(numbers[i + 1] != 0 && numbers[i] == 0 && numbers[i + 2] != 0)//111,112,121,212,211,122,222,212,-221
        {
            cout << names(numbers[i + 2]) << " HUNDRED AND" << tentest(i);
            return true;
        }
        else if(numbers[i + 1] != 0 && numbers[i] == 0 && numbers[i + 2] == 0)
        {
            cout << names(numbers[i + 2]) << "AND " << tentest(i);
            return true;
        }
        else if(numbers[i + 1] == 0 && numbers[i] != 0 && numbers[i + 2] != 0)
        {
            cout << names(numbers[i + 2]) << " HUNDRED AND " << names(numbers[i]);
            return true;
        }
        else if(numbers[i + 1] == 0 && numbers[i] != 0 && numbers[i + 2] == 0)
        {
            cout << names(numbers[i + 2]) << "AND " << names(numbers[i]);
            return true;
        }
        else if(numbers[i + 1] != 0 && numbers[i] == 0 && numbers[i + 2] != 0)
        {
            cout << names(numbers[i + 2]) << "AND" << tentest(i);
            return true;
        }
        else if(numbers[i + 1] != 0 && numbers[i] != 0 && numbers[i + 2] == 0)
        {
            cout << names(numbers[i + 2]) << "AND " << tentest(i);
            return true;
        }
        else
        {
            cout << names(numbers[i + 2]) << " HUNDRED AND " << tentest(i);
            return true;
        }
    }
}
