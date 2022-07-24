#include <iostream>

using namespace std;

int main()
{
    int x = 0;                  /* x is set to 0. */
    int i;

    for (i = 1; i <= 100; i++) /* i is set to 1. Everytime line 10 is ran, the value of i increases by 1 until it's value reaches 100, then the loop stops. */
    {
    x += i;                    /* The value of x is increased by the value of i, this will happen everytime the value of i changes until it's value reaches 100. */
    cout << x << endl;         /* The application prints out the value of x everytime i increases the value of x, showing the gradual change of x's value. x ends up with the value of 5050.*/
    }

return 0;
}