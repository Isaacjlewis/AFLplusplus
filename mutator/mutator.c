#include <assert.h>

#include <afl-fuzz.h>
#include <types.h>
#include <cmplog.h>
#include <xxhash.h>
#include <stdlib>
#include "map.h"

#include "cmp-functions.h"

void* afl_custom_init(afl_state_t* afl, unsigned int seed){
	return afl;
}

unsigned int afl_custom_fuzz_count(void *data, const unsigned char *buf, size_t buf_size){
  return 1;
}

size_t afl_custom_fuzz(void* udata, unsigned char *buf, size_t buf_size, unsigned char **out_buf, unsigned char *add_buf, size_t add_buf_size, size_t max_size){
  sleep(2);
  return 0;
}

void afl_custom_deinit(Angora* kale){
  
}
