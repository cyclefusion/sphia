
#include "sphia-test.h"

// See #51
static void
test_clear_similar_keys() {
  sphia_set(sphia, "key-1", "hello world");
  sphia_set(sphia, "key-10", "hello world");
  assert(2 == sphia_count(sphia));
  assert(0 == sphia_clear(sphia));
  assert(0 == sphia_count(sphia));
}

TEST(test_clear_similar_keys);
