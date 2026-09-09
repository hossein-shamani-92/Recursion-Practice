#include <iostream>
#include <vector>
using namespace std;

vector<int> answer;
int n;
int k;
int answer_number = 1;

void choose(int number, int count) {
    if (count == k) {
        if (answer[0] != 1 && answer.back() != n) {
            return;
        }


        cout << "answer" << answer_number << ": ";
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }
        answer_number++;
        cout << endl;
        return;
    }
    if (number > n) {
        return;
    }

    if (answer.empty() || number != answer.back() + 1) {

        answer.push_back(number);

        choose(number + 1, count + 1);

        answer.pop_back();

    }

    choose(number + 1, count);
}

int main() {
    while (true) {

        cout << "enter the number of people (n): " << endl;

        cin >> n;

        cout << "enter the number of people to choose (k): " << endl;

        cin >> k;

        if (k > 0 && k <= n) {
            break;
        }
        cout << "k must be less than or equal to n. Please try again." << endl;
    }

    choose(1, 0);


    return 0;
}
