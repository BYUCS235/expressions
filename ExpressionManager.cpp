#include "ExpressionManager.h"  
    /*
	* Checks whether an expression is balanced on its parentheses
	*
	* - The given expression will have a space between every number or operator
	*
	* @return true if expression is balanced
	* @return false otherwise
	*/
// The set of opening parentheses.
const string OPEN = "([{";

// The corresponding set of closing parentheses.
const string CLOSE = ")]}";

bool is_open(char ch) {
    return OPEN.find(ch) != string::npos;
}

bool is_close(char ch) {
    return CLOSE.find(ch) != string::npos;
}

bool ExpressionManager::isBalanced(string expression)
{
    cout << "In isBalanced expression "<<expression<<endl;
    
    stack<char> s;
    bool balanced = true;
    for (string::const_iterator iter = expression.begin();
     balanced && (iter != expression.end());
     iter++) {
        char next_ch = *iter;
        if (is_open(next_ch)) {
            s.push(next_ch);
        } else if (is_close(next_ch)) {
            if (s.empty()) {
                balanced = false;
            } else {
                char top_ch = s.top();
                s.pop();
                balanced = 
                 OPEN.find(top_ch) == CLOSE.find(next_ch);
            }
        }
    }
    return balanced && s.empty();
}

	/**
	* Converts a postfix expression into an infix expression
	* and returns the infix expression.
	*
	* - The given postfix expression will have a space between every number or operator.
	* - The returned infix expression must have a space between every number or operator.
	* - Redundant parentheses are acceptable i.e. ( ( 3 * 4 ) + 5 ).
	* - Check lab requirements for what will be considered invalid.
	*
	* return the string "invalid" if postfixExpression is not a valid postfix expression.
	* otherwise, return the correct infix expression as a string.
	*/
	string ExpressionManager::postfixToInfix(string postfixExpression)
	{
	    cout << "In postfixToInfix"<<endl;
	    return("3+4");
	}

	/*
	* Evaluates a postfix expression returns the result as a string
	*
	* - The given postfix expression will have a space between every number or operator.
	* - Check lab requirements for what will be considered invalid.
	*
	* return the string "invalid" if postfixExpression is not a valid postfix Expression
	* otherwise, return the correct evaluation as a string
	*/
	string ExpressionManager::postfixEvaluate(string postfixExpression)
	{
	    cout << "In postfixEvaluate"<<endl;
	    return("3 4 +");
	}

	/*
	* Converts an infix expression into a postfix expression
	* and returns the postfix expression
	*
	* - The given infix expression will have a space between every number or operator.
	* - The returned postfix expression must have a space between every number or operator.
	* - Check lab requirements for what will be considered invalid.
	*
	* return the string "invalid" if infixExpression is not a valid infix expression.
	* otherwise, return the correct postfix expression as a string.
	*/
	string ExpressionManager::infixToPostfix(string infixExpression)
	{
	    cout << "In infixToPostfix"<<endl;
	    return("3 4 +");
	}