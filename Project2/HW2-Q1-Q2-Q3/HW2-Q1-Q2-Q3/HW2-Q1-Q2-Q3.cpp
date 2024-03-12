//HW2
//Lesson #16 - Literals and Escape Sequences
#include <iostream>

using namespace std;

int main()

{

	cout << "\a";


	cout << "Dear Sir \\Madam,\n\nHow are you?\n\nMy name is \"Sana\" ,nice to meet you.\n\n";

	cout << "\n";

	cout << "Ali\tAhmed\tLina\n";
	cout << "Fadi\tZain\tMona";



}

/***Homework**

what is literal?

A literal in programming refers to a notation representing a fixed value in the source code of a program. It can be a number, string, character, boolean, or any other primitive data type. For example, in the statement **`int x = 10;`**, the value **`10`** is a literal representing an integer.

can you assign different values to a literal?

iterals are fixed values that are directly represented in the source code. You cannot directly modify the value of a literal in C++. However, you can assign literals to variables and manipulate those variables to change their values.

Let's illustrate this with some examples in C++:

```cpp
#include <iostream>

int main() {
    // Integer literal
    int x = 10; // Assigns the literal value 10 to variable x
    std::cout << "x: " << x << std::endl; // Prints: x: 10
    
    // Changing the value of the variable
    x = 20; // Assigns a new value to variable x
    std::cout << "x: " << x << std::endl; // Prints: x: 20
    
    // String literal
    const char* str = "Hello"; // Assigns the literal string "Hello" to a variable str
    std::cout << "str: " << str << std::endl; // Prints: str: Hello
    
    return 0;
}
```

In this C++ code:

- **`10`** is an integer literal, and it's assigned to the variable **`x`**.
- **`"Hello"`** is a string literal, and it's assigned to the variable **`str`**.
- We can assign new values to **`x`** or **`str`**, but we cannot directly change the values of **`10`** or **`"Hello"`** because they are literals.

So, you cannot directly assign different values to a literal, but you can assign literals to variables and then manipulate those variables to change the values they hold.

What are literal types?

1. integer literals :
2. Floating point literals: 13.5 , 1.99 , -8.07
3. characters literals : A , b, z, $, #
4. escape sequences literals : 

why do we need escape sequence literals? 

Escape sequence literals are needed to represent characters that are difficult to represent directly in source code or may cause syntax errors. For instance, in many programming languages, you use escape sequences to represent special characters like newline **`\n`**, tab **`\t`**, or double quote **`\"`** within strings. This allows you to include characters that would otherwise be hard to represent or may conflict with the syntax of the programming language.*/