;========================================================
; unit_tests.asm
;
; Collects and executes all unit tests.
;========================================================
    SLDOPT COMMENT WPMEM, LOGPOINT, ASSERTION
    DEVICE ZXSPECTRUM48         ; Targeting ZSIM so works in workspaces

    include "src/references/constants.inc"
    include "src/references/unit_tests.inc"
    
    ORG $8000                   ; Let's start our code at 32k in uncontended space - we can change this later

;--------------------------------------------------------
    UNITTEST_INITIALIZE
    ; Do your initialization here ...?
	; TODO: I personally prefer unit tests to be self contained so this needs investigation
    nop

    ret

;--------------------------------------------------------
    ; Note; TestSuite then 'functions to call'
    include "src/unit_tests/TestSuite_color_a_square.inc"
    include "src/main/color_a_square.inc"

    RET
    SAVESNA "unit_tests.sna", $8000