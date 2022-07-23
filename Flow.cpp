#include <iostream>

using namespace std;

int main()
{
    int x = 0;                      /* Sets x to 0 */

    for (int i = 1; i <= 100; i++) /* Sets i to 1, program checks to see if i is less than or equal to 100, if the condition is met the program increases i by 1, the program stops when the variable i equals to 100 */
    {
        x += 1;                    /* line 10 acts as a counter. It will run line 10, then it will run line 12 increasing the "x" variable by  everytime line 10 runs. This continues until the condition is met. */
    }

    cout << x << endl;             /* The program will then print out the final result, "100". Since lines 10 and 12 were only running until variable i equals 100 the program stops at 100 resulting in the variable x being printed as "100" on the terminal. */
    return 0;
}