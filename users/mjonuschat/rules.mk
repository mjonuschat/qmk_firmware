SRC += $(USER_PATH)/mjonuschat.c \
        $(USER_PATH)/callbacks.c \
        $(USER_PATH)/keyrecords/process_records.c

ifneq ($(PLATFORM),CHIBIOS)
    ifneq ($(strip $(LTO_SUPPORTED)), no)
        LTO_ENABLE        = yes
    endif
endif

HOST_INPUT_PROFILE ?= macos/en_us
ifeq ($(strip $(HOST_INPUT_PROFILE)), macos/en_us)
    OPT_DEFS += -DKEYCODES_MACOS_US -DHOST_OS_MACOS
endif
ifeq ($(strip $(HOST_INPUT_PROFILE)), windows/en_us)
    UNICODE_ENABLE = yes
    OPT_DEFS += -DKEYCODES_WINDOWS_US -DHOST_OS_WINDOWS
endif

NEO_RMOD3_ANSI		?= no
ifeq ($(strip $(NEO_RMOD3_ANSI)), yes)
    OPT_DEFS += -DNEO_RMOD3_ANSI
endif

NEO_LAYER4_ANSI		?= no
ifeq ($(strip $(NEO_LAYER4_ANSI)), yes)
    OPT_DEFS += -DNEO_LAYER4_ANSI
endif

CUSTOM_LCD_DRIVER ?= yes
ifeq ($(strip $(ST7565_ENABLE)), yes)
    ifeq ($(strip $(CUSTOM_LCD_DRIVER)), yes)
        SRC += $(USER_PATH)/display/st7565_user.c
        OPT_DEFS += -DCUSTOM_LCD_DRIVER_CODE
    endif
endif

CUSTOM_RGBLIGHT ?= yes
ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
    ifeq ($(strip $(CUSTOM_RGBLIGHT)), yes)
        SRC += $(USER_PATH)/rgb/rgb_light_user.c
        ifeq ($(strip $(RGBLIGHT_STARTUP_ANIMATION)), yes)
            SRC += $(USER_PATH)/rgb/rgb_light_animation.c
        endif
    endif
endif
