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
  writeChunk(&chunk, constant, 123);
  writeChunk(&chunk, OP_RETURN, 123);

  interpret(&chunk);
  freeChunk(&chunk);
  freeVM();
  return 0;
}
