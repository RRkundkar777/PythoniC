#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    system("espeak Powering_off_in");
    system("espeak 10");
    system("espeak 9");
    system("espeak 8");
    system("espeak 7");
    system("espeak 6");
    system("espeak 5");
    system("espeak 4");
    system("espeak 3");
    system("espeak 2");
    system("espeak 1");
    system("shutdown -s -t 0");
}