#include <iostream>
#include <string>
#include <iomanip>
#include <cassert>

using namespace std;

main () {
    double quiz1 = 0, quiz2 = 0, quiz3 = 0, quiz4 = 0, quiz5 = 0, sumOfStuWeightedQuizScores = 0;
    double percent = 0.0 , quiz1Weight = 0, quiz2Weight = 0, quiz3Weight = 0, quiz4Weight = 0, quiz5Weight = 0;
    string letterGrade = "";
    int age, quiz1MaxScore, quiz2MaxScore, quiz3MaxScore, quiz4MaxScore, quiz5MaxScore;

    //variable retrieval
    cout << "Enter the Age of the student : ";
    cin >> age;
    cout << "Enter the Max Score of quiz 1 : ";
    cin >> quiz1MaxScore;
    cout << "Enter the Max Score of quiz 2 : ";
    cin >> quiz2MaxScore;
    cout << "Enter the Max Score of quiz 3 : ";
    cin >> quiz3MaxScore;
    cout << "Enter the Max Score of quiz 4 : ";
    cin >> quiz4MaxScore;
    cout << "Enter the Max Score of quiz 5 : ";
    cin >> quiz5MaxScore;
    cout << "Enter the score for quiz 1: ";
    cin >> quiz1;
    assert(quiz1 <= quiz1MaxScore);
    cout << "Enter the score for quiz 2: ";
    cin >> quiz2;
    assert(quiz2 <= quiz2MaxScore);
    cout << "Enter the score for quiz 3: ";
    cin >> quiz3;
    assert(quiz3 <= quiz3MaxScore);
    cout << "Enter the score for quiz 4: ";
    cin >> quiz4;
    assert(quiz4 <= quiz4MaxScore);
    cout << "Enter the score for quiz 5: ";
    cin >> quiz5;
    assert(quiz5 <= quiz5MaxScore);

  //checking age
    if (age < 18)
        {
            quiz1Weight = .2;
            quiz2Weight = .15;
            quiz3Weight = .25;
            quiz4Weight = .10;
            quiz5Weight = .30;
        }
    else
        {
            quiz1Weight = .25;
            quiz2Weight = .30;
            quiz3Weight = .35;
            quiz4Weight = .05;
            quiz5Weight = .05;
        }

  //math for weighted scores
    sumOfStuWeightedQuizScores = ((quiz1/quiz1MaxScore) * quiz1Weight) + ((quiz2/quiz2MaxScore) * quiz2Weight) + ((quiz3/quiz3MaxScore) * quiz3Weight) + ((quiz4/quiz4MaxScore) * quiz4Weight) + ((quiz5/quiz5MaxScore) * quiz5Weight);
    percent = sumOfStuWeightedQuizScores * 100;

  //letter grade check
    if (percent >= 90)
        letterGrade = "A";
    else if (percent >= 80)
        letterGrade = "B";
    else if (percent >= 70)
        letterGrade = "C";
    else if (percent >= 60)
        letterGrade = "D";
    else
        letterGrade = "F";

  //display results
    cout << fixed << setprecision(1) << "Overall Percent:" << percent << "%" << endl;
    cout << "Letter Grade: " << letterGrade << endl;
    return 0;
    }
