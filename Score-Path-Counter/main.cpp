#include <iostream>
using namespace std;

int ways = 0;

void play(int score) {

    
    if (score == 7) {
        ways++;
        return;
    }


    if (score > 7) {
        return;
    }

    play(score + 2);

    play(score + 3);
}

int main() {

    play(0);

    cout << "Number of ways: " << ways << endl;

    return 0;
}
