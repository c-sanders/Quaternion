Quaternions - just like complex numbers and vectors, are an example of 
a mathematical structure. However, whereas complex numbers are comprised of two
parts - a real part and an imaginary part, quaternions are comprised of
four parts - a real part and three imaginary parts. In case you weren't aware,
or it isn't obvious, these real parts are implemented using real numbers,
while the imaginary parts are implemented using imaginary numbers. Recall
quickly that an imaginary number is defined as follows;

```
$$i = sqrt{-1}$$
```

Quaternions are most often described as follows;

```
q = a + ib + jc + kd
```

where a represents the real part of the quaternion and ib + jc + kd
represent the imaginary parts of the quaternion. To help distinguish
all four parts of a quaternion from each other, the unit values i, j,
and k are used to help denote the three sets of imaginary numbers.

Quaternions can be thought of as an extension to complex numbers, which
are most often described as follows;

```
c = a + ib
```

You can see from this that if a given quaternion has values of c and d
equal to 0, then it degenerates into a complex number.

For more information about quaternions, please refer to the documentation
in the doc sub-directory of this package.