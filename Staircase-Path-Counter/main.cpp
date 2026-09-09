#include <iostream>
using namespace std;

int ways = 0;

void findPath(int position) {

    if (position == 4) {
        ways++;
        return;
    }

    if (position > 4) {
        return;
    }

    findPath(position + 1);

    findPath(position + 2);
}

int main() {

    findPath(0);

    cout << "Number of paths: " << ways << endl;

    return 0;
}
