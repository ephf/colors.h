# colors.h

## Use

Use `${fmt}` followed by whatever string you want to be formatted and clear formatting using `$`

```c
#include <colors.h>

int main() {
    // error
    printf($b $red "error:" $ " Something bad happened\n");

    //warning
    printf($yellow "warning:" $ " This isn't so bad\n");
}
```

## Examples

![](./assets/example.gif)

## Table

| Macro | Description | String |
| - | - | - |
| `$` | reset | `"\x1b[0m"` |
| `$b` | bold | `"\x1b[1m"` |
| `$f` | faint (non-std) | `"\x1b[2m"` |
| `$i` | italic (non-std, sometimes inverse) | `"\x1b[3m"` |
| `$u` | underline | `"\x1b[4m"` |
| `$l` | slow blink | `"\x1b[5m"` |
| `$p` | rapid blink (non-std) | `"\x1b[6m"` |
| `$r` | reverse | `"\x1b[7m"` |
| `$c` | conceal (non-std) | `"\x1b[8m"` |
| `$s` | strikethrough (non-std) | `"\x1b[9m"` |
| `$bu` | bold off or double underline (non-std) | `"\x1b[21m"` |
| `$n` | normal color or intensity | `"\x1b[22m"` |
| `$ni` | not italic or Fraktur | `"\x1b[23m"` |
| `$nu` | not underlined | `"\x1b[24m"` |
| `$nl` | not blinking | `"\x1b[25m"` |
| `$nn` | not inverse | `"\x1b[27m"` |
| `$nc` | not concealed | `"\x1b[28m"` |
| `$ns` | not strikethrough | `"\x1b[29m"` |
| `$a` | framed | `"\x1b[51m"` |
| `$e` | encircled | `"\x1b[52m"` |
| `$o` | overlined | `"\x1b[53m"` |
| `$na` | not framed or encircled | `"\x1b[54m"` |
| `$no` | not overlined | `"\x1b[55m"` |
| `$iu` | ideogram underline (non-std) | `"\x1b[60m"` |
| `$id` | ideogram double underline (non-std) | `"\x1b[61m"` |
| `$io` | ideogram overline (non-std) | `"\x1b[62m"` |
| `$ib` | ideogram double overline (non-std) | `"\x1b[63m"` |
| `$is` | ideogram stress marking (non-std) | `"\x1b[64m"` |
| `$if` | ideogram attributes off (non-std) | `"\x1b[65m"` |
| `$font(n)` | alternate font (0-9) | `"\x1b[1"` |
| `$fraktur` | Fraktur font | `"\x1b[20m"` |
| `$black` | black foreground | `"\x1b[30m"` |
| `$red` | red foreground | `"\x1b[31m"` |
| `$green` | green foreground | `"\x1b[32m"` |
| `$yellow` | yellow foreground | `"\x1b[33m"` |
| `$blue` | blue foreground | `"\x1b[34m"` |
| `$magenta` | magenta foreground | `"\x1b[35m"` |
| `$cyan` | cyan foreground | `"\x1b[36m"` |
| `$white` | white foreground | `"\x1b[37m"` |
| `$default` | default forreground | `"\x1b[39m"` |
| `$lblack` | light black foreground | `"\x1b[90m"` |
| `$lred` | light red foreground | `"\x1b[91m"` |
| `$lgreen` | light green foreground | `"\x1b[92m"` |
| `$lyellow` | light yellow foreground | `"\x1b[93m"` |
| `$lblue` | light blue foreground | `"\x1b[94m"` |
| `$lmagenta` | light magenta foreground | `"\x1b[95m"` |
| `$lcyan` | light cyan foreground | `"\x1b[96m"` |
| `$lwhite` | light white foreground | `"\x1b[97m"` |
| `$256(n)` | 1-256 foreground (non-std) | `"\x1b[38;5;"` |
| `$rgb(r, g, b)` | red, green, blue foreground (non-std) | `"\x1b[38;2;"` |
| `$bblack` | black background | `"\x1b[40m"` |
| `$bred` | red background | `"\x1b[41m"` |
| `$bgreen` | green background | `"\x1b[42m"` |
| `$byellow` | yellow background | `"\x1b[43m"` |
| `$bblue` | blue background | `"\x1b[44m"` |
| `$bmagenta` | magenta background | `"\x1b[45m"` |
| `$bcyan` | cyan background | `"\x1b[46m"` |
| `$bwhite` | white background | `"\x1b[47m"` |
| `$bdefault` | default background | `"\x1b[49m"` |
| `$blblack` | light black background | `"\x1b[100m"` |
| `$blred` | light red background | `"\x1b[101m"` |
| `$blgreen` | light green background | `"\x1b[102m"` |
| `$blyellow` | light yellow background | `"\x1b[103m"` |
| `$blblue` | light blue background | `"\x1b[104m"` |
| `$blmagenta` | light magenta background | `"\x1b[105m"` |
| `$blcyan` | light cyan background | `"\x1b[106m"` |
| `$blwhite` | light white background | `"\x1b[107m"` |
| `$b256(n)` | 1-256 background (non-std) | `"\x1b[48;5;"` |
| `$brgb(r, g, b)` | red, green, blue background (non-std) | `"\x1b[48;2;"` |
