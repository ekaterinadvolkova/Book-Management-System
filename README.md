# Book Management System

The program  keeps record of books that are in the library. 

### Saved book information
* Name of the book
* Id number of the book
* Name of the person who borrowed this book
* Date when the book is to be returned

The program uses an array of records to hold the books in the library and keeps track of who borrowed books and when they are due to be returned.

### Minimum number of necessary commands:
1. Initialize (clear all records)
2. Save library records to file
3. Read library records from file
4. Add a new book to library
5. Borrow a book
6. Return a book
7. Print a report which lists all books. First the ones that are out on a loan and then the ones that are available in the library.

Keeping a separate record of books and library card holders is considered an additional credit.

### General guidelines
* Global variables may not be used in any of the assignments.
* Classes that are to be saved to a file must provide overloaded operators for writing to and reading from a file. 
* A class may provide a separate member function for interactive entry of values.

### User-friendly prerequisites:
* When user is requested to enter values program must clearly state what type of values are expected
* If user enters an invalid value an error message must displayed
* Reports must print data in formatted columns where printed data is aligned by columns. For example, when printing numbers make the field width large enough to hold largest number that you are going to print.
* “Magic numbers” are not to be used.  The constants need to be defined if the limit  is needed to be set. For example, the range of valid values is defined with constants. 
* The descriptive names are necessary for classes and member functions.
* All tasks should be delegated to objects. 
* The STL (containers, algorithms, etc.) should be used as much as possible.
