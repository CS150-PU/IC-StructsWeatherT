//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     We want to track weather conditions for the month of December.
//              Each day we will record the high temperature (double), low
//              temperature (double), inches of rainfall (double), and snow
//              fall (double). The data file weather.txt contains the data for
//              the month with a sentinel value of -999.0 for the high
//              temperature.
//
//              You are to write TODOs in order below.
//
//              NOTE: Never read the sentinel value into the array of data
// Hours:       
//******************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

const int MAX_DAYS = 31;

// TODO #1: Create a struct capable of storing information for a single day's
//          worth of data. Name the members according to our coding standards.



// TODO #3: Write the function prototype to read in a single day's worth of
//          weather.



// TODO #5: Write the function prototype to read in the weather data for the
//          month.



// TODO #8: Write the function prototype to find the hottest day. Return the
//          index value in the array of the day with the hottest day.
//          If there are no values in the array, return -1.



int main () {
  const string FILE_NAME = "data/weather.txt";

  // TODO #2: Create an array capable of holding a month's worth of information

  int size;
  int indexOfHighestTemp;

  // TODO #7: Call the function from TODO #5 to read all weather data from
  //          the file data/weather.txt. Check that you've read in the 
  //          information correctly using the debugger.
  //
  //          NOTE: Show me your loaded up array of structs with the data
  //                from the data file


  // TODO #10:  Output the highest temperature for the month


  return EXIT_SUCCESS;
}

// TODO #4: Write the function definition for TODO #3



// TODO #6: Write the function definition for TODO #5. This function is to 
//          use the function from TODO #3.


// TODO #9: Write the function definition for TODO #8. 

