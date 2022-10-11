#ifndef functionlikemacro_h
#define functionlikemacro_h

/**
 * File: 3-function_like_macro.h
 * Desc: defines a function-like macro ABS(x)
 * the absolute value of a number x
 * @x: number
 */

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))
#endif
