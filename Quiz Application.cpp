#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, score = 0;
    // Heading
    cout << "\n\n\t\t Quiz\n\t Press enter to start Quiz";
    getchar();
    system("cls");

    // Question 1
    cout << "\n\tWhich is the smallest even prime nubmer ?";
    cout << "\n\t1. 3\n\t2. 4\n\t3. 2\n\t4. Non of the above\n\t";
    cin >> a1;
    // Check answer
    if (a1 == 3)
    {
        score = score + 4; // 1 question 4 marks
    }
    system("cls");

    // Question 2
    cout << "\n\tWhat is 7 + 2 ?";
    cout << "\n\t1. 5\n\t2. 4\n\t3. 9\n\t4. 7\n\t";
    cin >> a2;
    if (a2 == 2)
    {
        score = score + 4;
    }
    system("cls");

    // Question 3
    cout << "\n\tWhat are we learning?";
    cout << "\n\t1. C\n\t2. C++\n\t3. Python\n\t4. HTML\n\t";
    cin >> a3;
    if (a3 == 2)
    {
        score = score + 4;
    }
    system("cls");

    // Result
    cout << "\n\tYou scored: " << score << "\n";

    return 0;
}