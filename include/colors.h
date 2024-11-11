#ifndef COLOR__
#define COLOR__

// 0: reset
#define $ "\x1b[0m"
// 1: bold
#define $b "\x1b[1m"
// 2: faint (non-std)
#define $f "\x1b[2m"
// 3: italic (non-std, sometimes inverse)
#define $i "\x1b[3m"
// 4: underline
#define $u "\x1b[4m"
// 5: slow blink
#define $l "\x1b[5m"
// 6: rapid blink (non-std)
#define $p "\x1b[6m"
// 7: reverse
#define $r "\x1b[7m"
// 8: conceal (non-std)
#define $c "\x1b[8m"
// 9: strikethrough (non-std)
#define $s "\x1b[9m"
// 21: bold off or double underline (non-std)
#define $bu "\x1b[21m"
// 22: normal color or intensity
#define $n "\x1b[22m"
// 23: not italic or Fraktur
#define $ni "\x1b[23m"
// 24: not underlined
#define $nu "\x1b[24m"
// 25: not blinking
#define $nl "\x1b[25m"
// 27: not inverse
#define $nn "\x1b[27m"
// 28: not concealed
#define $nc "\x1b[28m"
// 29: not strikethrough
#define $ns "\x1b[29m"
// 51: framed
#define $a "\x1b[51m"
// 52: encircled
#define $e "\x1b[52m"
// 53: overlined
#define $o "\x1b[53m"
// 54: not framed or encircled
#define $na "\x1b[54m"
// 55: not overlined
#define $no "\x1b[55m"
// 60: ideogram underline (non-std)
#define $iu "\x1b[60m"
// 61: ideogram double underline (non-std)
#define $id "\x1b[61m"
// 62: ideogram overline (non-std)
#define $io "\x1b[62m"
// 63: ideogram double overline (non-std)
#define $ib "\x1b[63m"
// 64: ideogram stress marking (non-std)
#define $is "\x1b[64m"
// 65: ideogram attributes off (non-std)
#define $if "\x1b[65m"

// 1n: alternate font (0-9)
#define $font(n) "\x1b[1" #n "m"
// 20: Fraktur font
#define $fraktur "\x1b[20m"

// 30: black foreground
#define $black "\x1b[30m"
// 31: red foreground
#define $red "\x1b[31m"
// 32: green foreground
#define $green "\x1b[32m"
// 33: yellow foreground
#define $yellow "\x1b[33m"
// 34: blue foreground
#define $blue "\x1b[34m"
// 35: magenta foreground
#define $magenta "\x1b[35m"
// 36: cyan foreground
#define $cyan "\x1b[36m"
// 37: white foreground
#define $white "\x1b[37m"
// 39: default forreground
#define $default "\x1b[39m"
// 90: light black foreground
#define $lblack "\x1b[90m"
// 91: light red foreground
#define $lred "\x1b[91m"
// 92: light green foreground
#define $lgreen "\x1b[92m"
// 93: light yellow foreground
#define $lyellow "\x1b[93m"
// 94: light blue foreground
#define $lblue "\x1b[94m"
// 95: light magenta foreground
#define $lmagenta "\x1b[95m"
// 96: light cyan foreground
#define $lcyan "\x1b[96m"
// 97: light white foreground
#define $lwhite "\x1b[97m"
// 38;5;n: 1-256 foreground (non-std)
#define $256(n) "\x1b[38;5;" #n "m"
// 38;2;r;g;b: red, green, blue foreground (non-std)
#define $rgb(r, g, b) "\x1b[38;2;" #r ";" #g ";" #b "m"

// 40: black background
#define $bblack "\x1b[40m"
// 41: red background
#define $bred "\x1b[41m"
// 42: green background
#define $bgreen "\x1b[42m"
// 43: yellow background
#define $byellow "\x1b[43m"
// 44: blue background
#define $bblue "\x1b[44m"
// 45: magenta background
#define $bmagenta "\x1b[45m"
// 46: cyan background
#define $bcyan "\x1b[46m"
// 47: white background
#define $bwhite "\x1b[47m"
// 49: default background
#define $bdefault "\x1b[49m"
// 100: light black background
#define $blblack "\x1b[100m"
// 101: light red background
#define $blred "\x1b[101m"
// 102: light green background
#define $blgreen "\x1b[102m"
// 103: light yellow background
#define $blyellow "\x1b[103m"
// 104: light blue background
#define $blblue "\x1b[104m"
// 105: light magenta background
#define $blmagenta "\x1b[105m"
// 106: light cyan background
#define $blcyan "\x1b[106m"
// 107: light white background
#define $blwhite "\x1b[107m"
// 48;5;n: 1-256 background (non-std)
#define $b256(n) "\x1b[48;5;" #n "m"
// 48;2;r;g;b: red, green, blue background (non-std)
#define $brgb(r, g, b) "\x1b[48;2;" #r ";" #g ";" #b "m"

#endif