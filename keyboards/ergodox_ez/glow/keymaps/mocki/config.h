/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef DEBOUNCE
#define DEBOUNCE 10

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 120000

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 12

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 11

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 8

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 35

#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"ExXKG/XGGmg"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define RGB_MATRIX_STARTUP_SPD 60
