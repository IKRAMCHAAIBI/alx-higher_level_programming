#include <stdlib.h>
#include <stdio.h>
#include <python.h>
/**
 * print_python_list_info - function that prints some basic
 * info about python lists
 * @p: python list
 */
void print_python_list_info(PyObject *p)
{
	int elem;

	printf("[*] Sze of python List = %lu\n", ((PyListObject *)p)->allocated);
	for (elem = 0; elem < Py_SIZE(P); elem++)
		printf("Element %d: %s\n", elem, Py_TYPE(PyList_Getltemp(p, elem))->tp_name);
}
