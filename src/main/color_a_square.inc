color_a_square:
        ld a, COLORPAPER_MAGENTA
        ld (MEMADDRESS_ATTRIBUTES), a
        ret