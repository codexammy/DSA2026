/*
 * Program: Simple Quiz Game
 * Description: A multiple-choice quiz game with 5 questions.
 *              Keeps score and shows the result at the end.
 *
 * Example:
 *   Q1: What is 2 + 2?  a) 3  b) 4  c) 5  d) 6
 *   Answer: b
 *   Correct!
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    // Quiz questions, options and correct answers
    string questions[] = {
        "What is 5 + 3?",
        "Which planet is closest to the Sun?",
        "What is the capital of France?",
        "How many sides does a hexagon have?",
        "What is the square root of 144?"
    };
    string options[][4] = {
        {"a) 6", "b) 7", "c) 8", "d) 9"},
        {"a) Venus", "b) Earth", "c) Mercury", "d) Mars"},
        {"a) London", "b) Paris", "c) Berlin", "d) Rome"},
        {"a) 5", "b) 6", "c) 7", "d) 8"},
        {"a) 10", "b) 11", "c) 12", "d) 14"}
    };
    char correctAnswers[] = {'c', 'c', 'b', 'b', 'c'};
    int score = 0;
    char userAnswer;
    cout << "===== C++ Quiz Game =====" << endl;
    cout << "5 questions. Enter a, b, c, or d.\n" << endl;
    for (int q = 0; q < 5; q++) {
        cout << "Q" << (q + 1) << ": " << questions[q] << endl;
        for (int o = 0; o < 4; o++) cout << "  " << options[q][o] << endl;
        cout << "Your answer: ";
        cin >> userAnswer;
        userAnswer = tolower(userAnswer);
        if (userAnswer == correctAnswers[q]) {
            cout << "Correct!\n" << endl;
            score++;
        } else {
            cout << "Wrong! Correct answer: " << correctAnswers[q] << "\n" << endl;
        }
    }
    cout << "===== Quiz Over =====" << endl;
    cout << "Your score: " << score << " / 5" << endl;
    if (score == 5)      cout << "Perfect score! Excellent!" << endl;
    else if (score >= 3) cout << "Good job!" << endl;
    else                 cout << "Keep practicing!" << endl;
    return 0;
}
