#include <stdio.h>
#define VECTOR_TYPE int
#define VECTOR_NAME int
#include "vector.h"

void print_vec(vec_int_t vec){
	int i;
	for (i = 0; i < vec_int_size(vec); i++) {
		printf("%d ", vec_int_get(vec, i));
	}
	printf("\n");
}

int main(void) {
	vec_int_t vec;
	vec_int_init(vec);
	vec_int_append(vec, 2);
	print_vec(vec);
	vec_int_set(vec, 69, 0);
	print_vec(vec);
	vec_int_append(vec, 100);
	print_vec(vec);
	vec_int_swap(vec, 0, 1);
	print_vec(vec);
	vec_int_append(vec, 101);
	print_vec(vec);
	vec_int_append(vec, 102);
	print_vec(vec);
	vec_int_pop(vec);
	print_vec(vec);
	vec_int_append(vec, 200);
	print_vec(vec);
	vec_int_pop(vec);
	print_vec(vec);
	vec_int_pop(vec);
	print_vec(vec);
	vec_int_del(vec, 0);
	print_vec(vec);
	vec_int_del(vec, 1);
	print_vec(vec);
}
