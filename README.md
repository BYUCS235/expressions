# expressions
The first section of lab #3 requires you to write a function to determine if an expression is balanced.  The book talks about the problem and proposes an algorithm for the function isBalanced(). 

1. Create an empty stack of characters.
2. Assume that the expression is balanced (balanced is true).
3. Set index to 0.
4. while balanced is true and index < the expression’s length
5. Get the next character in the data string.
6. if the next character is an opening parenthesis 
7. Push it onto the stack.
8. else if the next character is a closing parenthesis 
9. Pop the top of the stack.
10. if stack was empty or its top does not match the closing parenthesis
11. Set balanced to false.
12. Increment index.
13. Return true if balanced is true and the stack is empty.

For this learning activity, we will implement this algorithm from the book.

## Helper functions
We mentioned that several containers use iterators so that you can switch more easily between them.  It turns out that you can also use an iterator with a string.  Try this approach to iterate through the expression string.

```c++
for (string::const_iterator itr = input_string.begin();
  itr != input_string.end(); ++itr) {
  char_stack.push(*itr);
}
```
