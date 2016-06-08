message(" == data struct module == ")

set(DS_DIR ds/)

set(
	DS_LIST
	${DS_DIR}/ds.c
	${DS_DIR}/hashtable.c
	${DS_DIR}/stack.c
	)

add_library(ds ${DS_LIST})
