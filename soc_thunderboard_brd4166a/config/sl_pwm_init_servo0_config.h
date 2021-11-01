#ifndef PWM_INIT_SERVO0_CONFIG_H
#define PWM_INIT_SERVO0_CONFIG_H

#ifdef __cplusplus
extern "C"
{
#endif

// <<< Use Configuration Wizard in Context Menu >>>

// <h>PWM configuration

// <o SL_PWM_SERVO0_FREQUENCY> PWM frequency [Hz]
// <i> Default: 10000
#define SL_PWM_SERVO0_FREQUENCY       50

// <o SL_PWM_SERVO0_POLARITY> Polarity
// <PWM_ACTIVE_HIGH=> Active high
// <PWM_ACTIVE_LOW=> Active low
// <i> Default: PWM_ACTIVE_HIGH
#define SL_PWM_SERVO0_POLARITY        PWM_ACTIVE_HIGH
// </h> end pwm configuration

// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>

  // <timer channel=OUTPUT> SL_PWM_LED0
  // $[TIMER_SL_PWM_LED0]
  #define SL_PWM_SERVO0_PERIPHERAL                   WTIMER0
  #define SL_PWM_SERVO0_PERIPHERAL_NO                0

  #define SL_PWM_SERVO0_OUTPUT_CHANNEL               1
  // WTIMER0 CC1 on PA8
  #define SL_PWM_SERVO0_OUTPUT_PORT                  gpioPortA
  #define SL_PWM_SERVO0_OUTPUT_PIN                   8
  #define SL_PWM_SERVO0_OUTPUT_LOC                   6
  // [TIMER_SL_PWM_LED0]$
// <<< sl:end pin_tool >>>

#ifdef __cplusplus
}
#endif

#endif // PWM_INIT_SERVO0_CONFIG_H
