#include <iostream>
#include <string.h>
#include <ctime>
using namespace std;

int main(int argc, char const *argv[])
{
    time_t now = time(0);
    char* dt =ctime(&now);
    cout << "Local date and time is: " << dt <<endl;
    return 0;
}


owowowo