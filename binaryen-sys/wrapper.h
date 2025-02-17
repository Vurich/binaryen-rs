#include <stdbool.h>

#include "binaryen/src/binaryen-c.h"

#ifdef __cplusplus
extern "C" {
#endif

BinaryenModuleRef BinaryenModuleSafeRead(const char* input, size_t inputSize);

BinaryenModuleRef translateToFuzz(const char *data, size_t len, bool emitAtomics);

void BinaryenShimDisposeBinaryenModuleAllocateAndWriteResult(
    BinaryenModuleAllocateAndWriteResult result
);

#ifdef __cplusplus
}
#endif
