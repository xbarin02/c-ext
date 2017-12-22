# c-ext

C/C++ language extensions.

## Some example

```
#include <break>

for(int i = 0; i < 100; i++) {
    for(int j = 0; j < 100; j++) {
        if(condition) {
            // break two nested enclosing loops
            break(2);
        }
    }
}
```
