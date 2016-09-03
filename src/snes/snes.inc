; Acquired from https://github.com/PeterLemon/SNES
;============== (Key: R=Read, W=Write, D=Double Read/Write) 
; SNES Include
;==============
; Memory Map
WRAM := $0000         ; WRAM Mirror ($7E0000-$7E1FFF)                        8KB/RW

; PPU Picture Processing Unit Ports (Write-Only)
REG_INIDISP   := $2100  ; Display Control 1                                     1B/W
REG_OBSEL     := $2101    ; Object Size & Object Base                             1B/W
REG_OAMADDL   := $2102  ; OAM Address (Lower 8-Bit)                             2B/W
REG_OAMADDH   := $2103  ; OAM Address (Upper 1-Bit) & Priority Rotation         1B/W
REG_OAMDATA   := $2104  ; OAM Data Write                                        1B/W D
REG_BGMODE    := $2105   ; BG Mode & BG Character Size                           1B/W
REG_MOSAIC    := $2106   ; Mosaic Size & Mosaic Enable                           1B/W
REG_BG1SC     := $2107    ; BG1 Screen Base & Screen Size                         1B/W
REG_BG2SC     := $2108    ; BG2 Screen Base & Screen Size                         1B/W
REG_BG3SC     := $2109    ; BG3 Screen Base & Screen Size                         1B/W
REG_BG4SC     := $210A    ; BG4 Screen Base & Screen Size                         1B/W
REG_BG12NBA   := $210B  ; BG1/BG2 Character Data Area Designation               1B/W
REG_BG34NBA   := $210C  ; BG3/BG4 Character Data Area Designation               1B/W
REG_BG1HOFS   := $210D  ; BG1 Horizontal Scroll (X) / M7HOFS                    1B/W D
REG_BG1VOFS   := $210E  ; BG1 Vertical   Scroll (Y) / M7VOFS                    1B/W D
REG_BG2HOFS   := $210F  ; BG2 Horizontal Scroll (X)                             1B/W D
REG_BG2VOFS   := $2110  ; BG2 Vertical   Scroll (Y)                             1B/W D
REG_BG3HOFS   := $2111  ; BG3 Horizontal Scroll (X)                             1B/W D
REG_BG3VOFS   := $2112  ; BG3 Vertical   Scroll (Y)                             1B/W D
REG_BG4HOFS   := $2113  ; BG4 Horizontal Scroll (X)                             1B/W D
REG_BG4VOFS   := $2114  ; BG4 Vertical   Scroll (Y)                             1B/W D
REG_VMAIN     := $2115    ; VRAM Address Increment Mode                           1B/W
REG_VMADDL    := $2116   ; VRAM Address    (Lower 8-Bit)                         2B/W
REG_VMADDH    := $2117   ; VRAM Address    (Upper 8-Bit)                         1B/W
REG_VMDATAL   := $2118  ; VRAM Data Write (Lower 8-Bit)                         2B/W
REG_VMDATAH   := $2119  ; VRAM Data Write (Upper 8-Bit)                         1B/W
REG_M7SEL     := $211A    ; Mode7 Rot/Scale Mode Settings                         1B/W
REG_M7A       := $211B      ; Mode7 Rot/Scale A (COSINE A) & Maths 16-Bit Operand   1B/W D
REG_M7B       := $211C      ; Mode7 Rot/Scale B (SINE A)   & Maths  8-bit Operand   1B/W D
REG_M7C       := $211D      ; Mode7 Rot/Scale C (SINE B)                            1B/W D
REG_M7D       := $211E      ; Mode7 Rot/Scale D (COSINE B)                          1B/W D
REG_M7X       := $211F      ; Mode7 Rot/Scale Center Coordinate X                   1B/W D
REG_M7Y       := $2120      ; Mode7 Rot/Scale Center Coordinate Y                   1B/W D
REG_CGADD     := $2121    ; Palette CGRAM Address                                 1B/W
REG_CGDATA    := $2122   ; Palette CGRAM Data Write                              1B/W D
REG_W12SEL    := $2123   ; Window BG1/BG2  Mask Settings                         1B/W
REG_W34SEL    := $2124   ; Window BG3/BG4  Mask Settings                         1B/W
REG_WOBJSEL   := $2125  ; Window OBJ/MATH Mask Settings                         1B/W
REG_WH0       := $2126      ; Window 1 Left  Position (X1)                          1B/W
REG_WH1       := $2127      ; Window 1 Right Position (X2)                          1B/W
REG_WH2       := $2128      ; Window 2 Left  Position (X1)                          1B/W
REG_WH3       := $2129      ; Window 2 Right Position (X2)                          1B/W
REG_WBGLOG    := $212A   ; Window 1/2 Mask Logic (BG1..BG4)                      1B/W
REG_WOBJLOG   := $212B  ; Window 1/2 Mask Logic (OBJ/MATH)                      1B/W
REG_TM        := $212C       ; Main Screen Designation                               1B/W
REG_TS        := $212D       ; Sub  Screen Designation                               1B/W
REG_TMW       := $212E      ; Window Area Main Screen Disable                       1B/W
REG_TSW       := $212F      ; Window Area Sub  Screen Disable                       1B/W
REG_CGWSEL    := $2130   ; Color Math Control Register A                         1B/W
REG_CGADSUB   := $2131  ; Color Math Control Register B                         1B/W
REG_COLDATA   := $2132  ; Color Math Sub Screen Backdrop Color                  1B/W
REG_SETINI    := $2133   ; Display Control 2                                     1B/W

; PPU Picture Processing Unit Ports (Read-Only)
REG_MPYL      := $2134     ; PPU1 Signed Multiply Result (Lower  8-Bit)            1B/R
REG_MPYM      := $2135     ; PPU1 Signed Multiply Result (Middle 8-Bit)            1B/R
REG_MPYH      := $2136     ; PPU1 Signed Multiply Result (Upper  8-Bit)            1B/R
REG_SLHV      := $2137     ; PPU1 Latch H/V-Counter By Software (Read=Strobe)      1B/R
REG_RDOAM     := $2138    ; PPU1 OAM  Data Read                                   1B/R D
REG_RDVRAML   := $2139  ; PPU1 VRAM  Data Read (Lower 8-Bit)                    1B/R
REG_RDVRAMH   := $213A  ; PPU1 VRAM  Data Read (Upper 8-Bit)                    1B/R
REG_RDCGRAM   := $213B  ; PPU2 CGRAM Data Read (Palette)                        1B/R D
REG_OPHCT     := $213C    ; PPU2 Horizontal Counter Latch (Scanline X)            1B/R D
REG_OPVCT     := $213D    ; PPU2 Vertical   Counter Latch (Scanline Y)            1B/R D
REG_STAT77    := $213E   ; PPU1 Status & PPU1 Version Number                     1B/R
REG_STAT78    := $213F   ; PPU2 Status & PPU2 Version Number (Bit 7=0)           1B/R

; APU Audio Processing Unit Ports (Read/Write)
REG_APUIO0    := $2140   ; Main CPU To Sound CPU Communication Port 0            1B/RW
REG_APUIO1    := $2141   ; Main CPU To Sound CPU Communication Port 1            1B/RW
REG_APUIO2    := $2142   ; Main CPU To Sound CPU Communication Port 2            1B/RW
REG_APUIO3    := $2143   ; Main CPU To Sound CPU Communication Port 3            1B/RW
; $2140..$2143 - APU Ports Mirrored To $2144..$217F

; WRAM Access Ports
REG_WMDATA    := $2180   ; WRAM Data Read/Write                                  1B/RW
REG_WMADDL    := $2181   ; WRAM Address (Lower  8-Bit)                           1B/W
REG_WMADDM    := $2182   ; WRAM Address (Middle 8-Bit)                           1B/W
REG_WMADDH    := $2183   ; WRAM Address (Upper  1-Bit)                           1B/W
; $2184..$21FF - Unused Region (Open Bus)/Expansion (B-Bus)
; $2200..$3FFF - Unused Region (A-Bus)

; CPU On-Chip I/O Ports (These Have Long Waitstates: 1.78MHz Cycles Instead Of 3.5MHz)
; ($4000..$4015 - Unused Region (Open Bus)
REG_JOYWR     := $4016    ; Joypad Output                                         1B/W
REG_JOYA      := $4016     ; Joypad Input Register A (Joypad Auto Polling)         1B/R
REG_JOYB      := $4017     ; Joypad Input Register B (Joypad Auto Polling)         1B/R
; $4018..$41FF - Unused Region (Open Bus)

; CPU On-Chip I/O Ports (Write-only, Read=Open Bus)
REG_NMITIMEN  := $4200 ; Interrupt Enable & Joypad Request                     1B/W
REG_WRIO      := $4201     ; Programmable I/O Port (Open-Collector Output)         1B/W
REG_WRMPYA    := $4202   ; Set Unsigned  8-Bit Multiplicand                      1B/W
REG_WRMPYB    := $4203   ; Set Unsigned  8-Bit Multiplier & Start Multiplication 1B/W
REG_WRDIVL    := $4204   ; Set Unsigned 16-Bit Dividend (Lower 8-Bit)            2B/W
REG_WRDIVH    := $4205   ; Set Unsigned 16-Bit Dividend (Upper 8-Bit)            1B/W
REG_WRDIVB    := $4206   ; Set Unsigned  8-Bit Divisor & Start Division          1B/W
REG_HTIMEL    := $4207   ; H-Count Timer Setting (Lower 8-Bit)                   2B/W
REG_HTIMEH    := $4208   ; H-Count Timer Setting (Upper 1bit)                    1B/W
REG_VTIMEL    := $4209   ; V-Count Timer Setting (Lower 8-Bit)                   2B/W
REG_VTIMEH    := $420A   ; V-Count Timer Setting (Upper 1-Bit)                   1B/W
REG_MDMAEN    := $420B   ; Select General Purpose DMA Channels & Start Transfer  1B/W
REG_HDMAEN    := $420C   ; Select H-Blank DMA (H-DMA) Channels                   1B/W
REG_MEMSEL    := $420D   ; Memory-2 Waitstate Control                            1B/W
; $420E..$420F - Unused Region (Open Bus)

; CPU On-Chip I/O Ports (Read-only)
REG_RDNMI     := $4210    ; V-Blank NMI Flag and CPU Version Number (Read/Ack)    1B/R
REG_TIMEUP    := $4211   ; H/V-Timer IRQ Flag (Read/Ack)                         1B/R
REG_HVBJOY    := $4212   ; H/V-Blank Flag & Joypad Busy Flag                     1B/R
REG_RDIO      := $4213     ; Joypad Programmable I/O Port (Input)                  1B/R
REG_RDDIVL    := $4214   ; Unsigned Div Result (Quotient) (Lower 8-Bit)          2B/R
REG_RDDIVH    := $4215   ; Unsigned Div Result (Quotient) (Upper 8-Bit)          1B/R
REG_RDMPYL    := $4216   ; Unsigned Div Remainder / Mul Product (Lower 8-Bit)    2B/R
REG_RDMPYH    := $4217   ; Unsigned Div Remainder / Mul Product (Upper 8-Bit)    1B/R
REG_JOY1L     := $4218    ; Joypad 1 (Gameport 1, Pin 4) (Lower 8-Bit)            2B/R
REG_JOY1H     := $4219    ; Joypad 1 (Gameport 1, Pin 4) (Upper 8-Bit)            1B/R
REG_JOY2L     := $421A    ; Joypad 2 (Gameport 2, Pin 4) (Lower 8-Bit)            2B/R
REG_JOY2H     := $421B    ; Joypad 2 (Gameport 2, Pin 4) (Upper 8-Bit)            1B/R
REG_JOY3L     := $421C    ; Joypad 3 (Gameport 1, Pin 5) (Lower 8-Bit)            2B/R
REG_JOY3H     := $421D    ; Joypad 3 (Gameport 1, Pin 5) (Upper 8-Bit)            1B/R
REG_JOY4L     := $421E    ; Joypad 4 (Gameport 2, Pin 5) (Lower 8-Bit)            2B/R
REG_JOY4H     := $421F    ; Joypad 4 (Gameport 2, Pin 5) (Upper 8-Bit)            1B/R
; $4220..$42FF - Unused Region (Open Bus)

; CPU DMA Ports (Read/Write) ($43XP X = Channel Number 0..7, P = Port)
REG_DMAP0     := $4300    ; DMA0 DMA/HDMA Parameters                              1B/RW
REG_BBAD0     := $4301    ; DMA0 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T0L     := $4302    ; DMA0 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T0H     := $4303    ; DMA0 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B0      := $4304     ; DMA0 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS0L     := $4305    ; DMA0 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS0H     := $4306    ; DMA0 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB0     := $4307    ; DMA0 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A0L     := $4308    ; DMA0 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A0H     := $4309    ; DMA0 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL0     := $430A    ; DMA0 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED0   := $430B  ; DMA0 Unused Byte                                      1B/RW
; $430C..$430E - Unused Region (Open Bus)
REG_MIRR0     := $430F    ; DMA0 Mirror Of $430B                                  1B/RW

REG_DMAP1     := $4310    ; DMA1 DMA/HDMA Parameters                              1B/RW
REG_BBAD1     := $4311    ; DMA1 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T1L     := $4312    ; DMA1 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T1H     := $4313    ; DMA1 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B1      := $4314     ; DMA1 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS1L     := $4315    ; DMA1 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS1H     := $4316    ; DMA1 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB1     := $4317    ; DMA1 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A1L     := $4318    ; DMA1 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A1H     := $4319    ; DMA1 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL1     := $431A    ; DMA1 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED1   := $431B  ; DMA1 Unused Byte                                      1B/RW
; $431C..$431E - Unused Region (Open Bus)
REG_MIRR1     := $431F    ; DMA1 Mirror Of $431B                                  1B/RW

REG_DMAP2     := $4320    ; DMA2 DMA/HDMA Parameters                              1B/RW
REG_BBAD2     := $4321    ; DMA2 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T2L     := $4322    ; DMA2 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T2H     := $4323    ; DMA2 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B2      := $4324     ; DMA2 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS2L     := $4325    ; DMA2 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS2H     := $4326    ; DMA2 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB2     := $4327    ; DMA2 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A2L     := $4328    ; DMA2 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A2H     := $4329    ; DMA2 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL2     := $432A    ; DMA2 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED2   := $432B  ; DMA2 Unused Byte                                      1B/RW
; $432C..$432E - Unused Region (Open Bus)
REG_MIRR2     := $432F    ; DMA2 Mirror Of $432B                                  1B/RW

REG_DMAP3     := $4330    ; DMA3 DMA/HDMA Parameters                              1B/RW
REG_BBAD3     := $4331    ; DMA3 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T3L     := $4332    ; DMA3 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T3H     := $4333    ; DMA3 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B3      := $4334     ; DMA3 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS3L     := $4335    ; DMA3 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS3H     := $4336    ; DMA3 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB3     := $4337    ; DMA3 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A3L     := $4338    ; DMA3 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A3H     := $4339    ; DMA3 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL3     := $433A    ; DMA3 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED3   := $433B  ; DMA3 Unused Byte                                      1B/RW
; $433C..$433E - Unused Region (Open Bus)
REG_MIRR3     := $433F    ; DMA3 Mirror Of $433B                                  1B/RW

REG_DMAP4     := $4340    ; DMA4 DMA/HDMA Parameters                              1B/RW
REG_BBAD4     := $4341    ; DMA4 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T4L     := $4342    ; DMA4 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T4H     := $4343    ; DMA4 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B4      := $4344     ; DMA4 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS4L     := $4345    ; DMA4 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS4H     := $4346    ; DMA4 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB4     := $4347    ; DMA4 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A4L     := $4348    ; DMA4 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A4H     := $4349    ; DMA4 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL4     := $434A    ; DMA4 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED4   := $434B  ; DMA4 Unused Byte                                      1B/RW
; $434C..$434E - Unused Region (Open Bus)
REG_MIRR4     := $434F    ; DMA4 Mirror Of $434B                                  1B/RW

REG_DMAP5     := $4350    ; DMA5 DMA/HDMA Parameters                              1B/RW
REG_BBAD5     := $4351    ; DMA5 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T5L     := $4352    ; DMA5 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T5H     := $4353    ; DMA5 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B5      := $4354     ; DMA5 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS5L     := $4355    ; DMA5 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS5H     := $4356    ; DMA5 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB5     := $4357    ; DMA5 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A5L     := $4358    ; DMA5 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A5H     := $4359    ; DMA5 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL5     := $435A    ; DMA5 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED5   := $435B  ; DMA5 Unused Byte                                      1B/RW
; $435C..$435E - Unused Region (Open Bus)
REG_MIRR5     := $435F    ; DMA5 Mirror Of $435B                                  1B/RW

REG_DMAP6     := $4360    ; DMA6 DMA/HDMA Parameters                              1B/RW
REG_BBAD6     := $4361    ; DMA6 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T6L     := $4362    ; DMA6 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T6H     := $4363    ; DMA6 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B6      := $4364     ; DMA6 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS6L     := $4365    ; DMA6 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS6H     := $4366    ; DMA6 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB6     := $4367    ; DMA6 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A6L     := $4368    ; DMA6 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A6H     := $4369    ; DMA6 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL6     := $436A    ; DMA6 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED6   := $436B  ; DMA6 Unused Byte                                      1B/RW
; $436C..$436E - Unused Region (Open Bus)
REG_MIRR6     := $436F    ; DMA6 Mirror Of $436B                                  1B/RW

REG_DMAP7     := $4370    ; DMA7 DMA/HDMA Parameters                              1B/RW
REG_BBAD7     := $4371    ; DMA7 DMA/HDMA I/O-Bus Address (PPU-Bus AKA B-Bus)     1B/RW
REG_A1T7L     := $4372    ; DMA7 DMA/HDMA Table Start Address (Lower 8-Bit)       2B/RW
REG_A1T7H     := $4373    ; DMA7 DMA/HDMA Table Start Address (Upper 8-Bit)       1B/RW
REG_A1B7      := $4374     ; DMA7 DMA/HDMA Table Start Address (Bank)              1B/RW
REG_DAS7L     := $4375    ; DMA7 DMA Count / Indirect HDMA Address (Lower 8-Bit)  2B/RW
REG_DAS7H     := $4376    ; DMA7 DMA Count / Indirect HDMA Address (Upper 8-Bit)  1B/RW
REG_DASB7     := $4377    ; DMA7 Indirect HDMA Address (Bank)                     1B/RW
REG_A2A7L     := $4378    ; DMA7 HDMA Table Current Address (Lower 8-Bit)         2B/RW
REG_A2A7H     := $4379    ; DMA7 HDMA Table Current Address (Upper 8-Bit)         1B/RW
REG_NTRL7     := $437A    ; DMA7 HDMA Line-Counter (From Current Table entry)     1B/RW
REG_UNUSED7   := $437B  ; DMA7 Unused Byte                                      1B/RW
; $437C..$437E - Unused Region (Open Bus)
REG_MIRR7     := $437F    ; DMA7 Mirror Of $437B                                  1B/RW
; $4380..$5FFF - Unused Region (Open Bus)

; Further Memory
; $6000..$7FFF - Expansion (Battery Backed RAM, In HiROM Cartridges)
; $8000..$FFFF - Cartridge ROM
