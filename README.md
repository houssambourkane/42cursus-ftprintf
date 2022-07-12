# Ft_printf
This project aims to provide almost the same behavior as printf function in C language
### Steps to use it :
#### 1. Clone the repository
```
git clone https://github.com/houssambourkane/42cursus-ftprintf.git ft_printf
```
#### 2. Access the directory
```
cd ft_printf
```
#### 3. Run the Makefile command
```
make all
```
#### 4. It will generate the object files, and the library that gather all those objects file, you can run them with your main and the lib generated, for example :
```
gcc -Wall -Wextra -Werror main.c libprintf.a -o printf_exec && ./printf_exec
 ```

### Main example to try with (you can replace "get_next_line.c" with whatever file you want to read)
```
#include "ft_printf.h"

int main(void)
{
    int price = 10;
    ft_printf("%s %d %c\n%p", "The price is", price, '$', &price);
}
```
