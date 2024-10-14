#include <iostream>
using namespace std;
string checkPointPosition(int h, int x, int y);

main()
{
    int h, x, y;

    cout << "Enter height : ";
    cin >> h;

    cout << "Enter x coordinate : ";
    cin >> x;

    cout << "Enter y coordinate : ";
    cin >> y;
    cout << checkPointPosition(h, x, y);
}

string checkPointPosition(int h, int x, int y)
{
    if ((x % h == 0 || y % h == 0) && ((x >= h && x <= (h + h) && y >= 0 && y <= (4 * h)) || (x >= (h + h) && x <= (h + h + h))))
    {
        return "Border";
    }

    else if ((x > 0 || x < h || y > 0 || y < h) && (x >= h && x <= (h + h) && y < (4 * h)))
    {
        return "Inside";
    }

    return "Outside";
}