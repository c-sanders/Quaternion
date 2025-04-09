## README.md file for project Quaternion


* #### What is a quaternion?

Quaternions are an example of a mathematical structure. Other, well known
examples of mathematical structures include complex numbers and vectors.
However, whereas a complex numbers are comprised of two
parts - a real part and an imaginary part, quaternions are comprised of
four parts - a real part and three imaginary parts. These real parts are
usually implemented as natural numbers, while the imaginary parts are usually
implemented as imaginary numbers. As a quick aside, you should recall that
an imaginary number is defined as the square root of -1.

Quaternions are most often prsented in a manner which is similar to the
following;

```
q = a + ib + jc + kd
```

where the a represents the real part of the quaternion and ib + jc + kd
represents the imaginary parts of the quaternion. To help distinguish
all four parts of a quaternion from each other, the unit values i, j,
and k are used to help denote the numbers which are associated with each
of a quaternion's three imaginary parts. i is simply equal to the square root of -1
as we saw a moment ago, while j and k are also equal to the square root of -1
and serve the same role for each of the other two imaginary parts of a
quaternion as i does for the first imaginary part.

Since i, j, and k are all equal to the square root of -1, we can state this
fact rather succinctly - albeit in a slightly different manner, as follows;

```
ii = jj = kk = -1
```

The real part of a quaternion, that is a, is often referred to as the scalar
part of a quaternion, while the three imaginary parts - when taken together,
are referred to as the vector part of a quaternion.


* #### Quaternions and their relationship to complex numbers.

Quaternions can be thought of as an extension to complex numbers, that latter of which
are most often presented in a manner which is similar to the following;

```
c = a + ib
```

You can see from this that if a given quaternion has values of c and d
equal to 0, then it degenerates into a complex number.


* #### Evolution of natural numbers to complex numbers.

One of the reasons complex numbers exist, is because they compensate
for a critical shortcoming in the natural numbers, i.e. real numbers, integer numbers,
fractions, and the like. This shortcoming is what we saw above - the
inability to be able to take the square root of natural numbers when their value is
negative.

If we have a number line which we label x, then the complex plane which is associated
with this number line can be thought of as an extension to those numbers which reside 
on this number line. That is, the expansion of this 1-d number line into a 2-d plane
comes about as we expand natural numbers into their corresponding complex numbers.


* #### What a quaternion is not.

But what would happen, if instead of a number line x, we had a 3-dimensional
Euclidean space which was comprised of three mutually orthogonal axes labelled
x, y, and z? If we were to take the square root of the negative values on the
x-axis, then that is not an issue - the results simply reside on the i-axis.
But what if we were to take the square root of the negative values on the
y-axis? The answer is that the resulting values DO NOT reside on the j-axis.
Similarly, doing the same thing to the negative values on the z-axis does not
result in values which reside on the k-axis.


* #### What is a quaternion? A more detailed answer.


* #### Further information about quaternions.

For more information about quaternions, please refer to the documentation
in the doc sub-directory of this package.