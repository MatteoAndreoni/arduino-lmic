// Project-specific definitions
#define CFG_eu868 1
#define CFG_sx1276_radio 1

// Must be set to 0 if class C is not used
#define ENABLE_CLASS_C 0

// Define this to disable all code related to joining
#define DISABLE_JOIN
// Define this to disable all code related to ping
#define DISABLE_PING
// Define this to disable all code related to beacon tracking.
// Requires ping to be disabled too
#define DISABLE_BEACONS

/* Debug */
/*
#define LMIC_ENABLE_long_messages 0
#define LMIC_PRINTF_TO Serial
#define LMIC_DEBUG_LEVEL 2
*/

/* Make events work even when Serial.begin() is not defined (but an eventual lmic FAILURE will not be printed) */
//#define DISABLE_LMIC_FAILURE_TO

/* Must be defined for set a specific clock error */
//#define LMIC_ENABLE_arbitrary_clock_error 1

/* Enable this to use interrupt handler routines listening for RISING signals.
 Otherwise, the library polls digital input lines for changes */
//#define LMIC_USE_INTERRUPTS
