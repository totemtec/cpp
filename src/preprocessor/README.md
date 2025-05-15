### 预编译

```sh
# 生成中间临时文件
gcc -save-temps -c -o multiply.o -v multiply.c

# 只显示预编译结果
gcc -E multiply.c
```



