#Team 2 as red team

#Applications

#1 in GraphicEngine.h 
#DCL51-CPP. Do not declare or define a reserved identifier
#Avoided leading and trailing _ in the name of the header guard

#2 in minesweeper.cpp
#MSC55-CPP. Value-returning functions must return a value from all exit paths
#In goalFunction for example, there is an if statement that has a 
#return inside its brackets. You have to be sure to include a return 
#for when the condition of the if statement is not true.
#This was consistent in any functions with if statements and returns
#goalFunction is just one example

#3 in minesweeper.cpp
#MSC51-CPP. Ensure your random number generator is properly seeded
#In randomNumber although they should've used a number generator beside 
#rand(), they did seed well by using srand(time(0))

#4 in minesweeper.cpp
#MSC37-C. Ensure that control never reaches the end of a non-void function
#This is along the same lines as MSC55-CPP. If the function should return something
#it must be verified that the function will always return something regardless
#of the if statements, etc that are evaluated.

#5 in minesweeper.cpp
#DCL01-C. Do not reuse variable names in subscopes
#The functions in this file use distinct and descriptive variable names
#In the nested for loops in main the outer loop index had a different variable
#name than the inner to avoid any possible confusion

#6 MSC04-C. Use comments consistently and in a readable fashion
#They have made use of this rec consistently throughout the code.

#7 in minesweeper.cpp
#DCL04-C. Do not declare more than one variable per declaration
#They declared each variable on a different line throughout

#8 in minesweeper.cpp
#DCL07-C. Include the appropriate type information in function declarators
#type information for functions declared in the function declarator rather
#than in identifier list form

#9 in minesweeper.cpp
#DCL19-C. Minimize the scope of variables and functions
#In for loops declared int i for example (the index) inside of the
#loop initialization to avoid conflicts later on

#Exceptions
#1 in minesweeper.cpp
#MSC50-CPP. Do not use std::rand() for generating pseudorandom numbers
#because they can be predictable. They use rand() in randomNumber
#Changed the randomNumber function to use C++11 <random> and properly
#seeded with the system clock (MSC51-CPP)

#2 in minesweeper.cpp
#DCL15-C. Declare file-scope objects or functions that do not
#need external linkage as static
#Changed the functions in minsweeper.cpp to be static with the exception of main
#did not change the functions in the other files to be static because 
#they are used in minesweeper.cpp 

#3 in GraphicEngine.cpp/GraphicEngine.h
#DCL20-C. Explicitly specify void when a function accepts no arguments
#Functions like clearScreen, drawYouWon, etc were passing in no arguments and leaving the
#parameter blank. We have updated the functions to have void as a parameter 
#ex/clearScreen(void)