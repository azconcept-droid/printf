## Cloning printf function
>
> - ### Algorithm
> - 1. START
> - 2. GET string in main.c
> - 3. LOOP through until NULL terminator
> - 4. CHECK IF % is present at 3-> IF yes GOTO 5,ELSE continue 3.
> - 5. CHECK the next character-> IF NULL GOTO 7,ELSE IF format specifier GOTO 6 ELSE GOTO 4.
> - 6. CALL a function pointer to point to appropriate function which handle the specifier.
> - 7. Print string to stdout.
> - 8. RETURN number of characters printed.
> - 9. END.
