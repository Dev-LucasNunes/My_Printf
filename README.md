# My printf() Implementation

# **Description**
This project consists of a custom implementation of the printf function in the C language. The printf function is one of the most commonly used functions in C and is responsible for printing formatted text to the standard output.

My implementation replicates the main functionalities of the original printf, allowing for string formatting with placeholders, format specifiers, and variable arguments. By creating this implementation, my main goal was to understand how the printf function works under the hood and gain a deeper knowledge of string manipulation and output formatting in C.

# **Features**
The Libft42Sp library includes several categories of functions:

* String formatting with placeholders %
* Format specifiers for different data types, such as %d, %s, %c, %f, %x, among others
* **Linked lists:** functions for creating, manipulating, and traversing linked lists.
* **Character manipulation:** functions for checking and manipulating characters.
* **Extra functions:** additional functions that can be useful in different situations.

# **How to Use**
1. Add the printf_custom.c file to your C project.
2. Include the header printf_custom.h in your source code.
3. Call the my_printf() function with the desired arguments, following the same syntax you would use for the standard printf function.

Example:

```c
#include <stdio.h>
#include "printf_custom.h"

int main() {
    my_printf("Hello, %s!\n", "world");
    my_printf("The value of pi is approximately %.2f\n", 3.14159);
    return 0;
}
```

# **Additional Notes**
This implementation complies with the specification of the printf function in the C language, but may not be as efficient or robust as the standard implementation, especially regarding handling all edge cases and formatting specificities.
Feel free to adjust this text as needed to fit your project and your specific implementation.

# **Contact**
If you have any questions, suggestions, or concerns, please open an issue in this repository or contact me directly.

Name: Lucas Nunes  
Email: dev.lucasnunes@gmail.com  
GitHub: Dev-LucasNunes