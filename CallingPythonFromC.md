Calling Python from C++ in Linux



$ which python3
/usr/bin/python3

$ ll /usr/bin/python3
lrwxrwxrwx 1 root root 9 Oct 25  2018 /usr/bin/python3 -> python3.6*

$python3-config --includes
-I/usr/include/python3.6m

Cleaned-up code from assignment specification

Please note the quotation marks. The quotation marks in the PDF are wrong.

Also note cout as opposed to count

Very important - You need to tell Python where to find your module. 


#include  <Python.h>
#include  <iostream>

using namespace std;

int main()
{
    cout << "Start 1 \n";
    Py_Initialize();
    cout << "2\n"; 

    // https://stackoverflow.com/questions/7624529/python-c-api-doesnt-load%20module/8859538#8859538
    PyObject *sys = PyImport_ImportModule("sys");
    PyObject *path = PyObject_GetAttrString(sys, "path");
    PyList_Append(path, PyUnicode_FromString("."));

    PyObject* my_module = PyImport_ImportModule("myfirstprogram");

    cerr << my_module << "\n";

    PyErr_Print();
    cerr << "3\n";

    PyObject* my_function = PyObject_GetAttrString(my_module, "printsomething");
    cout << "4\n";

    PyObject* my_result = PyObject_CallObject(my_function, NULL);

    Py_Finalize();

    return 0; 
}

$ g++ test.cc -o test -I/usr/include/python3.6m
/tmp/ccqLuNFE.o: In function `main':
test.cc:(.text+0x1c): undefined reference to `Py_Initialize'
test.cc:(.text+0x3b): undefined reference to `PyImport_ImportModule'
test.cc:(.text+0x66): undefined reference to `PyErr_Print'
test.cc:(.text+0x8c): undefined reference to `PyObject_GetAttrString'
test.cc:(.text+0xb4): undefined reference to `PyObject_CallObject'
test.cc:(.text+0xbd): undefined reference to `Py_Finalize'
collect2: error: ld returned 1 exit status

$ python3-config --libs
-lpython3.6m -lpthread -ldl  -lutil -lm 

$ ls
myfirstprogram.py  test.cc

$ g++ test.cc -o test -I/usr/include/python3.6m -lpython3.6m -lpthread -ldl  -lutil -lm
$ ./test
Start 1 
2
0x7f05071a6ea8
3
4
Hello from Python on Linux!
