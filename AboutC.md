# About C: CH 1.1
- contains functions and variables 
## `Main` - Function
> Your program begins executing at the beginning of `main` 
>> Every program MUST have a `main` someware. 

>() after `main` takes arguments, here `main()` takes no arg. 

## `#Include<stdio.h>`
> Tells computer to include info about standard input/output lib

## `()` - an Empty list

## `\n` - a newline 
>to items on left<br>
C Notation<br>
`printf` needs `\n`


## `printf` - Function
> printf("arg")<br>
never supplies a new line character automatically 
**See example** 
* `%d` inputs integers 
>* IN: `printf`("`%d` \t`%d`\n", 4, 56)<br>
OUT: 4 *tab* 56 
* `%d` for alignment 
> e.g.: %`3`d = print the number associated with this call in field 3 digits wide. 


> e.g.: %`3.1f` = 3 digits wide and 1 digit kept after the decimal.<br>
`f` just means float
* `%c` - Character 
* `%s` - String

## String Characters 
* `\t` Tab
* `\b` Backspace
* `\"` Doube quote
* `\\` Back slash itself

# Variables & Arithmatic CH1.2

## `int`- Declaration
> the list of variables that follow `int` are declared integers<br>
`float` similarly 

## `while` loops 
> conditons are tested, if true execute, if false end. Same as python.<br>
Loops once if going thru a list. 

## Multiplication and Division 
> Consider Cel = 5 * (fahr-32)/ 9<br>
vs. mult. by 5/9<br>
`Integer` division **Truncates**<br>
Not true for `Floats` 


# The `for` statement CH1.3
* like `for` loop 
* see e.g. or documentaion for better understanding 


# Symbolic Constants CH1.4
- `#define` lines 
> symbolic name or symnbolic constant to be a particular string of characters 
