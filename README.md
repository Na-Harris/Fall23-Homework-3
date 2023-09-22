# Homework # 3 - Selection and Loops
## Overview
Full Collaboration is authorized, however all work must be your own and you must understand everything submitted. Submit your code via GitHub classroom. 

## Before you Start
Ensure that you have read the lessons on [cplusplus.com](https://cplusplus.com/doc/tutorial/)

## Procedures
### [Structure of a Program](https://cplusplus.com/doc/tutorial/program_structure/) Write the basic outline of a C++ Program 
Write a program that prints your name on one line and TOOP HW2 on the second line. Your program should print results that look like this:

````
3/c Firstname Lastname
TOOP HW2
````
### [Variables and types](https://cplusplus.com/doc/tutorial/variables/) 
Write a loop that presents the user with several options.
- A variable called `inputFilename`. This is an arbitrary string that we will populate with an input file name or path later on. 
- A variable called `line`. This is an arbitrary string that will hold a line read from the input file. 
- A variable called `quantity`. This will be how much the user is buying of an item in whole numbers.
- A variable called `cost`. This will represent how much a specific item costs in dollars and cents.
- A variable called `discount`. This will represent the dollar amount that the user saves based on how much they purchase.
  
### [Basic input and ouptut](https://cplusplus.com/doc/tutorial/basic_io/), [Flow Control](http://www.cplusplus.com/doc/tutorial/control/) 
Some merchants offer a “quantity discount” to customers based on large quantities. Write code to calculate the discount for an item based on the quantity and cost that a user inputs. Make sure you set format flags for cin to properly print only two decimal places for dollar amounts (hint: checkout the reference for std::ios_base::precision on cplusplus.com).  Use the specific steps outlined below.
- Ask the user how many items they are buying and the individual cost of that item. Give the user some output to show the cost and how much they are saving.
  - Get the number of items the user is buying and store it in the `quantity` variable.
  - Get the price of the item the user is buying and store it in the `cost` variable.
  - Update cost to reflect the total cost of the purchase using `quantity`. 
  - If the user is buying a quantity of greater than zero and 10 or less, display the total cost and that there is no discount. 
  - If the user is buying a quantity of less than 45, calculate a discount of 5% and store it in discount. Display the total cost and the discount the user will receive. 
  - If the user is buying a quantity of 250 or less, calculate a discount of 10% and store it in discount. Display the total cost and the discount the user will receive. 
  - If the user is buying more than 250 items, calculate a discount of 15% and store it in discount. Display the total cost and the discount the user will receive. 
  - Your output may looking something like the following:
    ````
    What is the cost of the item you wish to purchase?
    19.99
    What is the quantity you are purchasing?
    39
    You are buying 39 items at a 5% discount cost of $740.63. You save $38.98!
    ````
### [Basic input and ouptut](https://cplusplus.com/doc/tutorial/basic_io/), [IO with Files](https://cplusplus.com/doc/tutorial/basic_io/), [While Loops](http://www.cplusplus.com/doc/tutorial/control/)
  Request, validate, and store some input from the user.
- You will initialize `inputFileName` from with the user’s responses to the questions above. However, we first need to ask for the user to input a file name but must ensure that the user has entered a valid file name! What better way than with loops?
  - Initialize an ifstream called `myFile`.
  - While the file is not open, do the following
    - Request a file name from the user.
    - Assign the input to the `inputFilename` variable.
    - Open the given file using `myFile`.
  - Print the opened file’s name to the console
- Your output may look somethign like the following. In the scenario below the user enters three incorrect filenames.  The fourth try is a valid input:
  ````
  Please enter a filename: test
  Incorrect filname format, try again!
  Please enter a filename: not working...
  Incorrect filname format, try again!
  Please enter a filename: input
  Incorrect filname format, try again!
  Please enter a filename: input.txt
  Success!
  Input Filename: input.txt
  ````
### [IO with Files](https://cplusplus.com/doc/tutorial/basic_io/), [Flow Control](http://www.cplusplus.com/doc/tutorial/control/) 
Read the first five lines from the provided input file, input.txt.
- You shall print each line to the console preceded by its line number

  >**Note**
  > Your code for this section may run, complete, and close the terminal too fast for you to see the screen output. Performing an arbitrary read of user input at the end of your code is one way to “pause” execution.

  - Consider the type of loop you want to use in this case. Although it may be tempting to continue using a while loop, perhaps a for loop is best suited here.
- Remember to close your file stream when you are finished. 






















  
