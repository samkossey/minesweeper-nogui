#include "Validation.h"
#include <iostream>
#include <string>

using namespace std;

int const Validation::MAX_WIDTH=100;
int const Validation::MAX_HEIGHT=100;

void Validation::printIntro()
{
   cout << "*******************************************************" << endl;
   cout << "* Secure System: Project 2: Minesweepers ver 0.1      *" << endl;
   cout << "*********************** Authors ***********************" << endl;
   cout << "* Kaoru (Teddy) Katayama                              *" << endl;
   cout << "* Alparslan Sari                                      *" << endl;
   cout << "*******************************************************" << endl;
}

int Validation::isValidateParamINT(string param)
{
   int pari = 0;
   try
   {
   	  pari = stoi(param);
   	  cout << pari << endl;
   }
   catch (exception& e)
   {
   	cout << "Minesweepers:ERROR> Invalid parameter ("<< param << ")  technical detail:: " << e.what() << endl;
   	return 0;
   }   	

   return pari;
}

bool Validation::isValidWidth(int width)
{
	// check if width == 0 || width == 1;
	if(width == 0 || width == 1)
	{
	    cout << "Minesweepers:ERROR> Invalid width value! width should be a number between MIN=2 and MAX=" << Validation::MAX_WIDTH << endl;
		return false;
	}

	// check if width > MAX;
    if(width > 100)
	{
	    cout << "Minesweepers:ERROR> Invalid width value! width exceeds the MAX value! width should be an even number between MIN=2 and MAX=" << Validation::MAX_WIDTH << endl;
		return false;
	}

	return true;
}

bool Validation::isValidHeight(int height)
{
	// check if height == 0 || height == 1;
	if(height == 0 || height == 1)
	{
	    cout << "Minesweepers:ERROR> Invalid height value! height should be a number between MIN=2 and MAX=" << Validation::MAX_HEIGHT << endl;
		return false;
	}

	// check if height > MAX;
    if(height > 100)
	{
	    cout << "Minesweepers:ERROR> Invalid height value! height exceeds the MAX value! height should be an even number between MIN=2 and MAX=" << Validation::MAX_HEIGHT << endl;
		return false;
	}

	return true;
}

bool Validation::isValidNumOfMines(int width, int height, int mines)
{
	// check min boundary
	if(mines==0)
	{
       cout << "Minesweepers:ERROR> Invalid number_of_mines value! number_of_mines should be at least 1!" << endl;
       return false;
	}

    int boardSize = width * height;
	if(mines >=  boardSize)
	{
		cout << "Minesweepers:ERROR> Invalid number_of_mines value! number_of_mines should be not exceed the available board space!" << endl;
		cout << "width  = " << width << "\n";
		cout << "height = " << height << "\n";
		cout << "Available Board space (width * height) = " << boardSize << "\n";
		cout << "In this case number_of_mines should not exceed " << boardSize - 1 << endl;
       return false;
	}

	return true;
}