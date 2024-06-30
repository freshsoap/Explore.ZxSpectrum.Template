    SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
    DEVICE ZXSPECTRUM48         ; Device setting for sjasmplus (.tap writing etc)

    INCLUDE "src/references/constants.inc"

    ORG $8000                   ; Let's start our code at 32k

;--------------------------------------------------------
    INCLUDE "src/main/color_a_square.inc"

    RET
    SAVESNA "main.sna", $8000   ; Save the assembled program as a tap file
