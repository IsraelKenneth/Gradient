#include <iostream>

using namespace std;
// Score: student will input their scores.
// Grade: a particular level of rank or mark indicating the quality of a student's work.
// Grade point: a number used to represent the average value of a student's work.
// Interpretation: explains the meaning of the rank or mark attained by the student.
int main()
{
   int score;
   cout << "Enter student score: ";
   cin >> score;
   if(score >= 80)
   {
       cout << "Score: " << score << endl << "Grade: A" << endl << "Grade point: 4.0" << endl << "Interpretation: Outstanding";
   }
   else if(score >= 75)
   {
       cout << "Score: " << score << endl << "Grade: B+" << endl << "Grade point: 3.5" << endl << "Interpretation: Very Good";
   }
      else if(score >= 70)
   {
       cout << "Score: " << score << endl << "Grade: B" << endl << "Grade point: 3.0" << endl << "Interpretation: Good";
   }
      else if(score >= 65)
   {
       cout << "Score: " << score << endl << "Grade: C+" << endl << "Grade point: 2.5" << endl << "Interpretation: Fairly Good";
   }
      else if(score >= 60)
   {
       cout << "Score: " << score << endl << "Grade: C" << endl << "Grade point: 2.0" << endl << "Interpretation: Average";
   }
      else if(score >= 55)
   {
       cout << "Score: " << score << endl << "Grade: D+" << endl << "Grade point: 1.5" << endl << "Interpretation: Below Average";
   }
      else if(score >= 50)
   {
       cout << "Score: " << score << endl << "Grade: D" << endl << "Grade point: 1.0" << endl << "Interpretation: Marginal";
   }
      else if(score >= 45)
   {
       cout << "Score: " << score << endl << "Grade: E" << endl << "Grade point: 0.5" << endl << "Interpretation: Below Marginal";
   }
      else if(score < 45 )
   {
       cout << "Score: " << score << endl << "Grade: F" << endl << "Grade point: 0" << endl << "Interpretation: Fail/Unsatisfactory";
   }
   return 0;
}
