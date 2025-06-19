        ORG 0x0000

START:  
        ;; Initialize (if needed)
        ;; …

MAIN:   
        ;; Turn lamp ON
        LDI  #0x01        ; acc ← 1
        STA  0xF0         ; write to lamp port
        CALL  DELAY       ; simple delay

        ;; Turn lamp OFF
        LDI  #0x00        ; acc ← 0
        STA  0xF0         ; write to lamp port
        CALL  DELAY       ; simple delay

        JMP  MAIN         ; loop forever

;;--------------------------------------------------
DELAY:  
        ;; simple busy-wait loop
        LDI  #0xFF        ; counter ← 255
DE1:    
        DEC  acc          ; decrement
        JNZ  DE1          ; if not zero, keep looping
        RET               ; return to caller

        END  START