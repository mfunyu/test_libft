# test_libft

----------------

## main.c
```
curl -O https://raw.githubusercontent.com/mfunyu/tester_libft/master/main.c
```
### コンパイル
```bash
gcc libft.a main.c -D STRLEN
```


----------------


## wrapper_malloc

```
curl -O https://raw.githubusercontent.com/mfunyu/tester_libft/master/malloc.h
curl -O https://raw.githubusercontent.com/mfunyu/tester_libft/master/wrapmalloc.c
```

### 書き換え
```makefile
CFLAGS		:= -I. -Wall -Wextra -Werror
```

```libft.h
#include "malloc.h"
```


### コンパイル
```bash
gcc libft.a wrapmalloc.c ft_split.c
```
