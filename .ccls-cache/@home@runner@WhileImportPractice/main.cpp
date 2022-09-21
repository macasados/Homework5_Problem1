#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


int main() {
  //declare variables
  string firstName;
  string date;
  int TestResult;
  int count = 0;
  int cumulative_cases = 0;
  
  //declare stream variables
  ifstream inFile; // needed to access the file we want to load
  ofstream outFile; // needed to save teh results of the analysis
  
  // open the input file
  inFile.open("TestResultsData.dat");

  //open the output file
  outFile.open(AnalyzedData.txt");
  
  //read in the date - first line of file 
  inFile >> date;
  cout << date << endl;
  
// read in the first 2 pieces of info on the second line
  inFile >> firstName;
    cout << firstName << ' ';
  inFile >> TestResult;
    cout << TestResult << endl;
  while(inFile)
  {
    //update number of cases & persons tested
    cumulative_cases = cumulative_cases + TestResult;
    count++; // increment the number of patients

    //read in the next line
    inFile >> firstName;
    inFile >> TestResult;
  }
  
  cout << "Total Number of Cases = " << cumulative_cases << endl;
  cout << "Number of persons tested = " << count << endl;
  
  inFile.close();
  
  



  
}