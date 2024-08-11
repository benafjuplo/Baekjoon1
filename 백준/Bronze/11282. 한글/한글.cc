/*
- Title : 11282 - Korean
- Start Time : 24-08-09, 02:56
- End Time : 
- Try : 
- Category :
*/

#include <iostream>
#include <locale>   // for debug

using namespace std;

int main() {
    //locale::global(locale("en_US.UTF-8"));  for debug

    int N;
    cin >> N;

    // unicode "가"'s start point
    int start = 0xAC00;

    // Nth korean
    int unicode = start + (N - 1);

    // print UTF-8
    cout << static_cast<char>(unicode >> 12 | 0xE0);
    cout << static_cast<char>(((unicode >> 6) & 0x3F) | 0x80);
    cout << static_cast<char>((unicode & 0x3F) | 0x80);

    return 0;
}