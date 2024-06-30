    MODULE TestSuite_color_a_square

UT_WHEN_initialState_THEN_IsBlank:

    ; WHEN
    nop

    ; THEN
    nop ; ASSERTION A == 0
    TEST_MEMORY_BYTE MEMADDRESS_DISPLAYFILE, 0
    
    TC_END

UT_WHEN_color_a_square_THEN_IsMagenta:

    ; WHEN
    call color_a_square

    ; THEN
    nop ; ASSERTION A == COLORPAPER_MAGENTA
    TEST_MEMORY_BYTE MEMADDRESS_DISPLAYFILE, 0

    TC_END

    ENDMODULE