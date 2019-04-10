/*
 * softPwm.hpp
 */

#ifdef __cplusplus

extern int  softPwmCreate (int pin, int value, int range) ;
extern void softPwmWrite  (int pin, int value) ;    // similar to (pin, HIGH)
extern void softPwmStop   (int pin) ;               // similar to (pin, LOW)

#endif
