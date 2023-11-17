#include "chunk.h"
#include "common.h"
#include "debug.h"

int main(int argc, char *argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  int constant = addConstant(&chunk, 1.2);
  writeChunk(&chunk, OP_CONSTANT);
  writeChunk(&chunk, constant);
  writeChunk(&chunk, OP_RETURN);
  disassembleInstruction(&chunk, 0);
  disassembleInstruction(&chunk, 1);
  disassembleInstruction(&chunk, 2);
  freeChunk(&chunk);
  return 0;
}
