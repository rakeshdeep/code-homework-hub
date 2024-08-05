# C programming running notes

### Day-1

- [Helloworld program](day-1/helloworld.c)
  - In this program i have added just a header `#include<stdio.h>` and inside the `main()` I just call the `printf("Helloword")`.
- [variables and datatypes](day-1/variables.c)

  - **Declaration:**
    - datatype variable_name | eg: `int a;`
    - you can also initialize at the time of declaration. | eg: `int a =10;`

    - **Some key points on variable:**
        - variable is the name of a memory location which is used to store some value inside the memory.
        - variable also a identifier because it refers a name of a memory location.
        
  - **Datatypes and formate specifiers:**

    | Data Type                       | Keyword              | Size (Bytes) | Format Specifier |
    | ------------------------------- | -------------------- | ------------ | ---------------- |
    | Integer                         | `int`                | 4            | `%d`             |
    | Character                       | `char`               | 1            | `%c`             |
    | Floating Point                  | `float`              | 4            | `%f`             |
    | Double Precision Floating Point | `double`             | 8            | `%lf`            |
    | Void                            | `void`               | 0            | N/A              |
    | Short Integer                   | `short`              | 2            | `%hd`            |
    | Long Integer                    | `long`               | 4 or 8       | `%ld`            |
    | Long Long Integer               | `long long`          | 8            | `%lld`           |
    | Unsigned Integer                | `unsigned int`       | 4            | `%u`             |
    | Unsigned Character              | `unsigned char`      | 1            | `%c`             |
    | Unsigned Short Integer          | `unsigned short`     | 2            | `%hu`            |
    | Unsigned Long Integer           | `unsigned long`      | 4 or 8       | `%lu`            |
    | Unsigned Long Long Integer      | `unsigned long long` | 8            | `%llu`           |
    | Signed Integer                  | `signed int`         | 4            | `%d`             |
    | Signed Character                | `signed char`        | 1            | `%c`             |
    | Signed Short Integer            | `signed short`       | 2            | `%hd`            |
    | Signed Long Integer             | `signed long`        | 4 or 8       | `%ld`            |
    | Signed Long Long Integer        | `signed long long`   | 8            | `%lld`           |

 - [playing with printf & scanf](day-1/user_input.c)
    - taking user input using `scanf` and printing in the terminal using `printf`.
    - also using formate specifiers like `%s` for char array, `%d` for integer and so on.

 - [Control Structure](day-1/control_structure):
    - [if-else | if-else-if | nested-if](day-1/control_structure/if-else-if.c)
    - [switch-case](day-1/control_structure/switch-case.c)
    - [odd-even](day-1/control_structure/odd-even.c)