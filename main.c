#include "chunk.h"
#include "common.h"
#include "debug.h"

int main(int argc, char *argv[]) {
  Chunk chunk;
  initChunk(&chunk);
  writeChunk(&chunk, OP_RETURN);
  // freeChunk(&chunk);
  // disassembleChunk(&chunk, "test chunk");
  disassembleInstruction(&chunk, 0);
  return 0;
}
