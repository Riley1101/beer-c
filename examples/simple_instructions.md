## Simple instruction on adding 

```c
  initVM();
  Chunk chunk;
  initChunk(&chunk);

  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 1);
  writeChunk(&chunk, constant, 2);

  constant = addConstant(&chunk, 3.4);
  writeChunk(&chunk, OP_CONSTANT, 3);
  writeChunk(&chunk, constant, 4);

  writeChunk(&chunk, OP_ADD, 5);

  constant = addConstant(&chunk, 5.6);
  writeChunk(&chunk, OP_CONSTANT, 6);
  writeChunk(&chunk, constant, 7);

  writeChunk(&chunk, OP_SUBTRACT, 1);

  writeChunk(&chunk, OP_RETURN, 123);
```
