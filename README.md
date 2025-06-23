## README.md file for project Quaternion


* #### What are quaternions?

Quaternions are an example of a mathematical structure. Other, well known examples of mathematical
structures include complex numbers, vectors, and matrices - to name just a few. You might recall that
complex numbers are comprised of two parts - one real part and one imaginary part. Quaternions are a
bit like complex numbers, but instead of being comprised of two parts, they are comprised of four - 
one real part and three imaginary parts. When we say a "real part" in the context of complex numbers
and quaternions, what we actually mean is a real number. Similarly, when we say an "imaginary part"
in this context, what we actually mean is an imaginary number.

You might also recall that an imaginary number is usually denoted by the letter `i` and is defined
as being equal to the square root of -1. That is;

```math
i = \sqrt{-1}
```

Quaternions are most often presented in the literature, using a format which is similar to the
following;

```math
q = a + ib + jc + kd
```

where the `a` represents the real part of a quaternion and is referred to as a scalar, while 
`ib + jc + kd` represent the three imaginary parts of a quaternion and are referred to collectively
as a vector.

To help distinguish all three of the imaginary parts of a quaternion from one another - as well as
from the scalar, the unit values `i`, `j`, and `k` are associated with each of the three
imaginary parts. `i` is simply equal to the square root of -1 as we saw a moment ago, while `j` and `k`
are also equal to the square root of -1 and serve the same role for each of the other two imaginary
parts of a quaternion as `i` does for the first imaginary part.

Since `i`, `j`, and `k` are all equal to the square root of -1, we can state this
fact rather succinctly, as follows;

```math
i^{2} = j^{2} = k^{2} = -1
```

You can probably start to see by now why quaternions are called such. If you haven't worked it out, it
is because they are comprised of four parts, and the prefix "quater" comes from the Latin word for four.

As an interesting aside, the following relationship also holds for `i`, `j`, and `k`.

```math
ijk = -1
```


* #### Quaternions and their relationship to complex numbers.

Quaternions are an extension of the complex numbers, the latter of which
are most often presented in the literature in a manner which is similar to the following;

```math
c = a + ib
```

You can see from this that if a given quaternion has values of c and d equal to 0, then it
degenerates into a complex number. Since quaternions are an extension to complex numbers,
they are often referred to as "hypercomplex numbers". Other examples of hypercomplex numbers
include octonions and sedenions, and just as quaternions are examples of mathematical structures, so
too are octonions and sedenions.


* #### Evolution of natural numbers to complex numbers.

One of the reasons complex numbers exist, is because they compensate
for a critical shortcoming in the natural numbers, i.e. real numbers, integer numbers,
fractions, and the like. This shortcoming is what we glimpsed at above; the
inability to be able to take the square root of the natural numbers, when their value is negative.

If we have a number line which we label `x`, then the complex plane which is associated
with this number line can be thought of as an extension to those numbers which reside 
on this number line. That is, the expansion of this 1-dimensional number line into a 
2-dimensional plane comes about as a consequence of expanding natural numbers into
their corresponding complex numbers.


* #### What a quaternion is not.

But what would happen, if instead of a number line x, we had a 3-dimensional
Euclidean space which was comprised of three mutually orthogonal axes labelled
x, y, and z? If we were to take the square root of the negative values on the
x-axis, then that is not an issue - the results will simply be of the form i, -i2, i3.7 and the like.
But what would happen if we were to take the square root of the negative values on the
y-axis? The answer is that the resulting values are not of the form j, -j2, j3.7 and the like.
Similarly, doing the same thing to the negative values on the z-axis does not
result in values which are of the form k, -k2, k3.7 and the like.


* #### What is a quaternion? A more detailed answer.

So quaternions do not reside in a 3-dimensional space which is the imaginary number
equivalent of the 3-dimensional Euclidean space which we saw in the previous section.
Instead, a quaternion's imaginary j and k axes, reside in higher imaginary 
dimensions or realms, which are above and beyond the quaternion's imaginary i-axis. Having said
all of this however, it must be remembered that all three of these imaginary axes are
mutually orthogonal to each other as well as to the real axis.

This concept of higher imaginary dimensions or realms might seem a bit difficult to
grasp at first, but don't stress too much about trying to understand it. It should
eventually make sense with time.


* #### Uses for quaternions.

One of the key benefits of quaternions and their three imaginary axes, is that they
facilitate the elegant rotation of vectors around a 3-dimensional space.

If we have a 3-dimensional vector `v` and a quaternion `q` which represents the desired rotation
in 3-dimensional space, then the result of applying `q` to the vector `v`, is the new vector
`v_new`. Mathematically, this process is shown below, where `q*` denotes the conjugate
of the rotation quaternion.

```
v_new = qvq*
```

* #### Further information about quaternions.

For more information about quaternions, please refer to the documentation
in the doc sub-directory of this package.

Another good source of information about both quaternions and vectors, is the book
"Vector", by Robyn Arianrhod.