#include "chunk.h"
#include "common.h"
#include "debug.h"

int main(int argc, char *argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT, 123);
  writeChunk(&chunk, OP_RETURN, 123);
  disassembleInstruction(&chunk, 0);
  disassembleInstruction(&chunk, 1);
  freeChunk(&chunk);
  return 0;
}
