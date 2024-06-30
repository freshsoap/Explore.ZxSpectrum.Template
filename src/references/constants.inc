
;--------------------------------------------------------
; COLORS  
COLORINK_BLACK     EQU 0x00
COLORINK_BLUE      EQU 0x01
COLORINK_RED       EQU 0x02
COLORINK_MAGENTA   EQU 0x03
COLORINK_GREEN     EQU 0x04
COLORINK_CYAN      EQU 0x05
COLORINK_YELLOW    EQU 0x06
COLORINK_WHITE     EQU 0x07
COLORPAPER_BLACK   EQU 0x00 << 3
COLORPAPER_BLUE    EQU 0x01 << 3
COLORPAPER_RED     EQU 0x02 << 3
COLORPAPER_MAGENTA EQU 0x03 << 3
COLORPAPER_GREEN   EQU 0x04 << 3
COLORPAPER_CYAN    EQU 0x05 << 3
COLORPAPER_YELLOW  EQU 0x06 << 3
COLORPAPER_WHITE   EQU 0x07 << 3

;--------------------------------------------------------
; MEMORY ADDRESSES
; https://worldofspectrum.org/ZXBasicManual/zxmanchap24.html

MEMADDRESS_DISPLAYFILE  EQU $4000                   ; Location of screen
MEMADDRESS_ATTRIBUTES   EQU $5800                   ; Location of color array
