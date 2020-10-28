#include <iostream>

using namespace std;

int seive(int response);
int main()
{
    int response;
    cout << "This program will find all prime numbers less than a limiting number to be inputted by you." << endl;
    cout << "Enter limiting number: ";
    cin >> response;

    seive(response);
    return 0;
}

int seive(int response)
{
    bool prime[response + 1];
    for(int i = 0; i <= response; i++)
    {
        prime[i] = true;
    }
    for(int i = 2; i * i < response; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i * i; j <= response; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i < response; i++)
        if(prime[i])
            cout << i << " ";
}
