# PRINTF

> ##  Projects Build by JUAN and JAVIER


We build to printf function receive user input and prints to the standard output


FORMAT outputs a specified format relative to the specifier input.

<img src="https://i.ytimg.com/vi/mZFdyoZhUb4/maxresdefault.jpg" alt="Printf" width="500" height="400">

![Printf](https://upload.wikimedia.org/wikipedia/commons/thumb/2/2c/Printf.svg/700px-Printf.svg.png)



| `specifier`|	`Output` |	`Example` |
| --------- | --------- | --------- |
| d or i|	Signed decimal integer|	392 |
|u	|Unsigned decimal integer|	7235|
|o	|Unsigned octal|	610|
|x	|Unsigned hexadecimal integer|	7fa|
|X	|Unsigned hexadecimal integer (uppercase)|	7FA|
|f	|Decimal floating point, lowercase|	392.65|
|F	|Decimal floating point, uppercase|	392.65|
|e	|Scientific notation (mantissa/exponent), lowercase|	3.9265e+2|
|E	|Scientific notation (mantissa/exponent), uppercase|	3.9265E+2|
|g	|Use the shortest representation: %e or %f|	392.65|
|G	|Use the shortest representation: %E or %F|	392.65|
|a	|Hexadecimal floating point, lowercase|	-0xc.90fep-2|
|A	|Hexadecimal floating point, uppercase|	-0XC.90FEP-2|
|c	|Character|	a|
|s	|String of characters|	sample|
|p	|Pointer address|	b8000000|
|%	|A % followed by another % character will write a single % to the stream.|	%|

The format specifier can also contain sub-specifiers: flags, width, .precision and modifiers (in that order), which are optional and follow these specifications:

| `flags`|	`description`|
| -------- | ------------ |
| -	|Left-justify within the given field width; Right justification is the default (see width sub-specifier).|
| +	| Forces to preceed the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.|
| (space)|	If no sign is going to be written, a blank space is inserted before the value.|
| #	|Used with o, x or X specifiers the value is preceeded with 0, 0x or 0X respectively for values different than zero. Used with a, A, e, E, f, F, g or G it forces the written output to contain a decimal point even if no more digits follow. By default, if no digits follow, no decimal point is written.|
|0	|Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).|

| `width` |	`description`|
| --------- | -------- |
| (number) |	Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger.|
| *	|The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.|

| `.precision` | 	`description`|
| ------------ | ------------ |
| .number	| For integer specifiers (d, i, o, u, x, X): precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. For a, A, e, E, f and F specifiers: this is the number of digits to be printed after the decimal point (by default, this is 6). For g and G specifiers: This is the maximum number of significant digits to be printed. For s: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. If the period is specified without an explicit value for precision, 0 is assumed.|
| .*	|The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.|