# expressions
In this learning activity, we will write a function to determine if an expression is balanced.  The following algorithm can be used for the function isBalanced(). 


For this learning activity, we will implement this algorithm.

```
Create an empty stack of characters.
Assume that the expression is balanced (balanced is true).
Set index to 0.
  while balanced is true and index < the expression’s length
    Get the next character in the data string.
    if the next character is an opening parenthesis
      Push it onto the stack.
    else if the next character is a closing parenthesis
      Pop the top of the stack.
      if stack was empty or its top does not match the closing parenthesis
        Set balanced to false.
    Increment index.
Return true if balanced is true and the stack is empty.
```

## Helper functions
We mentioned that several containers use iterators so that you can switch more easily between them.  It turns out that you can also use an iterator with a string.  Try this approach to iterate through the expression string.

```c++
for (string::const_iterator itr = input_string.begin();
  itr != input_string.end(); ++itr) {
  char_stack.push(*itr);
}
```
We are going to be looking for open parens, curly braces etc, so we ought to have a function that tells us which one we are encountering.
```c++
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
stack<char> s;
```
Now lets follow the steps in the algorithm from the book.  We push the next character on the stack if it is an open and pop one off if it is a close character.  Notice that the find() function for strings returns the offset into the string where the character was found, so if the offset in the OPEN string is the same as the offset in the CLOSE string, then they matched.
```c++
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
  ```
  Test your function to make sure it works and you are finished with the first part of the lab.
