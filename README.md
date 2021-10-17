# test_libft

## wrapper_malloc

```
curl -O https://raw.githubusercontent.com/mfunyu/test_libft/master/malloc.h
curl -O https://raw.githubusercontent.com/mfunyu/test_libft/master/wrapmalloc.c
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
