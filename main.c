#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "vm.h"

int main(int argc, char *argv[]) {
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

  int constant2= addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 1);
  writeChunk(&chunk, constant2, 2);

  constant2 = addConstant(&chunk, 3.4);
  writeChunk(&chunk, OP_CONSTANT, 3);
  writeChunk(&chunk, constant2, 4);


  writeChunk(&chunk, OP_RETURN, 123);

  interpret(&chunk);
  freeChunk(&chunk);
  freeVM();
  return 0;
}
