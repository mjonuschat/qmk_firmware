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
