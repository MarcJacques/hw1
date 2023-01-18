#include <iostream>
using namespace std;

int main() 
{

  int height_in_feet, height_in_inches, male_ideal_weight, female_ideal_weight;
  //enter height in feet and inches
  cout << "Please enter your height (feet inches) :";
  cin >> height_in_feet >> height_in_inches;

  //compute ideal weight
  male_ideal_weight = (6 * height_in_inches) + 106;
  female_ideal_weight = (5 * height_in_inches) + 100;

  //output ideal weights
  cout << "If you are a male, your ideal weight should be " << male_ideal_weight << " pounds." << endl;
   cout << "If you are a female, your ideal weight should be " << female_ideal_weight << " pounds." << endl;
  return 0;
}