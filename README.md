MY NAME SHIVAM BHAN AND MY ID IS 22103008
The project is a calculator that evaluates arithmetic expressions. It consists of two main files: test.cpp and calculator.hpp. Link to project: https://github.com/kimwalisch/calculator

test.cpp
Contains test cases to validate the calculator.
Uses the compare function to evaluate expressions and compare results.
main function runs these tests and prints the results.
calculator.hpp
Namespace calculator: Encapsulates all related classes and functions.

Class error: Inherits from std::runtime_error. It stores the expression and error message.

Constructor: Initializes with an expression and message.
expression(): Returns the stored expression.
Template Class ExpressionParser: Parses and evaluates arithmetic expressions.

Public Methods:
eval(const std::string& expr): Parses and evaluates the given expression string.
eval(char c): Evaluates a single character expression.
Private Methods:
pow(T x, T n): Computes x raised to the power n.
checkZero(T value): Checks for division by zero and throws an error if found.
calculate(T v1, T v2, const Operator& op): Performs calculation based on the operator.
isEnd(): Checks if the end of the expression is reached.
getCharacter(): Returns the current character or 0 if the end is reached.
expect(const std::string& str): Ensures the current position in the expression matches str.
unexpected(): Throws a syntax error for unexpected tokens.
eatSpaces(): Skips white space characters in the expression.
parseOp(): Parses a binary operator and returns its properties.
getInteger(): Converts a character to its integer value.
parseDecimal(): Parses a decimal number.
parseHex(): Parses a hexadecimal number.
isHex(): Checks if the current value is in hexadecimal format.
parseValue(): Parses an integer value, handling unary operators and parentheses.
parseExpr(): Parses and evaluates the entire expression, handling operator precedence and calculations.
Template Function eval(const std::string& expression): Instantiates ExpressionParser and calls its eval method for a string.

Template Function eval(char c): Instantiates ExpressionParser and calls its eval method for a single character.

In summary, the project is a calculator for evaluating arithmetic expressions. The main functionality is implemented in calculator.hpp with the ExpressionParser class, which handles parsing and evaluating expressions. test.cpp is used to test and validate the calculator's functionality.
