# PythonToC
Python to C examples

## Python Slicing
https://numpy.org/doc/stable/reference/arrays.indexing.html

Basic slicing extends Python’s basic concept of slicing to N dimensions. Basic slicing occurs when obj is a slice object (constructed by start:stop:step notation inside of brackets), an integer, or a tuple of slice objects and integers. Ellipsis and newaxis objects can be interspersed with these as well.

The basic slice syntax is i:j:k where i is the starting index, j is the stopping index, and k is the step (k≠0). This selects the m elements (in the corresponding dimension) with index values i, i + k, …, i + (m - 1) k where m=q+(r≠0) and q and r are the quotient and remainder obtained by dividing j - i by k: j - i = q k + r, so that i + (m - 1) k < j.

Negative i and j are interpreted as n + i and n + j where n is the number of elements in the corresponding dimension. Negative k makes stepping go towards smaller indices.

[start_row_index:end_row_index, start_column_index:end_column_index]

| **b =** array([[ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9], [10, 11, 12, 13, 14, 15, 16, 17, 18, 19]]) | **Result** |
| :---------:             | :---------:                                                                   |
| b[:,2]                  |  array([ 2, 12])                                                              |
| b[:,4]                  |  array([ 4, 14])                                                              |
| b[:1,4]                 |  array([4])                                                                   |
| b[1,1]                  |  11                                                                           |
| b[0,]                   |  array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9])                                        |
| b[:,np.arange(3)]       |  array([[ 0, 1, 2],      [10, 11, 12]])                                       |
| b[:,np.arange(2,5)]     |  array([[ 2, 3, 4],      [12, 13, 14]])                                       |
| b[:,3+np.arange(5)]     |  array([[ 3, 4, 5, 6, 7] [13, 14, 15, 16, 17]])                               |
| b[1,3]	                |  13                                                                           |
| b[0:1,0:3]              |  array([[0, 1, 2]])                                                           |
| b[0:2,0:3]	            |  array([[ 0, 1, 2],      [10, 11, 12]])                                       |
| b[0:2,3:5]	            |  array([[ 3, 4],         [13, 14]])                                           |
| b[:,[3,4,5]]            |  array([[ 3, 4, 5],      [13, 14, 15]])                                       |


					
