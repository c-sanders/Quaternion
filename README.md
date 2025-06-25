## README.md file for project Quaternion


* ### What are quaternions?

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

where the $a$ represents the real part of a quaternion and is referred to as a scalar, while 
$ib + jc + kd$ represent the three imaginary parts of a quaternion and are referred to collectively
as a vector.

To help distinguish all three of the imaginary parts of a quaternion from one another - as well as
from the scalar, the unit values $i$, $j$, and $k$ are associated with each of the three
imaginary parts. $i$ is simply equal to the square root of -1 as we saw a moment ago, while $j$ and $k$
are also equal to the square root of -1 and serve the same role for each of the other two imaginary
parts of a quaternion as $i$ does for the first imaginary part.

Since $i$, $j$, and $k$ are all equal to the square root of -1, we can state this
fact rather succinctly, as follows;

```math
i^{2} = j^{2} = k^{2} = -1
```

You can probably start to see by now why quaternions are called such. If you haven't worked it out, it
is because they are comprised of four parts, and the prefix "quater" comes from the Latin word for four.

As an interesting aside, the following relationship also holds for $i$, $j$, and $k$.

```math
ijk = -1
```


* ### Quaternions and their relationship to complex numbers.

Quaternions are an extension of the complex numbers, the latter of which
are most often presented in the literature in a manner which is similar to the following;

```math
c = a + ib
```

You can see from this that if a given quaternion has values of $c$ and $d$ equal to 0, then it
degenerates into a complex number. Since quaternions are an extension to complex numbers,
they are often referred to as "hypercomplex numbers". Other examples of hypercomplex numbers
include octonions and sedenions, and just as quaternions are examples of mathematical structures, so
too are octonions and sedenions.


* ### Evolution of natural numbers to complex numbers.

One of the reasons complex numbers exist, is because they compensate
for a critical shortcoming in the natural numbers, i.e. real numbers, integer numbers,
fractions, and the like. This shortcoming is what we glimpsed at above; the
inability to be able to take the square root of the natural numbers, when their value is negative.

If we have a number line which we label $x$, then the complex plane which is associated
with this number line can be thought of as an extension to those numbers which reside 
on this number line. That is, the expansion of this 1-dimensional number line into a 
2-dimensional plane comes about as a consequence of expanding natural numbers into
their corresponding complex numbers.


* ### What a quaternion is not.

But what would happen, if instead of a number line $x$, we had a 3-dimensional
Euclidean space which was comprised of three mutually orthogonal axes labelled
$x$, $y$, and $z$? If we were to take the square root of the negative values on the
x-axis, then that is not an issue - the results will simply be of the form $i$, $-i2$, $i3.7$ and the like.
But what would happen if we were to take the square root of the negative values on the
y-axis? The answer is that the resulting values are not of the form j, -j2, j3.7 and the like.
Similarly, doing the same thing to the negative values on the z-axis does not
result in values which are of the form k, -k2, k3.7 and the like.


* ### What a quaternion is.

So quaternions do not reside in a 3-dimensional space which is the imaginary number
equivalent of the 3-dimensional Euclidean space which we saw in the previous section.
Instead, a quaternion's imaginary j and k axes, reside in higher imaginary 
dimensions or realms, which are above and beyond the quaternion's imaginary i-axis. Having said
all of this however, it must be remembered that all three of these imaginary axes are
mutually orthogonal to each other as well as to the real axis.

This concept of higher imaginary dimensions or realms might seem a bit difficult to
grasp at first, but don't stress too much about trying to understand it. It should
eventually make sense with time.


* ### Using quaternions to calculate 3-dimensional rotations.

One of the key benefits of quaternions and their three imaginary axes, is that they
facilitate the elegant rotation of vectors around a 3-dimensional space.

If we have a 3-dimensional vector `v` and a quaternion `q` which represents the desired rotation
in 3-dimensional space, then the result of applying `q` to the vector `v`, is the new vector
`$v_{rotated}`. Mathematically, this process is shown below, where `q*` denotes the conjugate
of the rotation quaternion.

```math
v_{rotated} = qvq^{*}
```

But how do we construct the quaternion `q`, such that it will help facilitate our desired rotation?
That is, how do we encode into the four values which comprise the quaternion `q`, both the axis about
which we want to rotate the vector, along with the direction and angle of rotation around
this axis? Let's look at the latter issue first, before we discuss the problem of how to encode the
axis of rotation into `q`. 


* #### Encoding the direction and angle of rotation into `q`.

We denote the direction and angle by which we want we want to rotate our vector,
with the Greek letter $\theta$. Positive values
of this angle represent a clockwise rotation about the axis, whereas negative values of this
angle represent a counter-clockwise rotation about the axis. The angle of rotation is not
placed directly into `a`, rather it is transformed first - as outlined below, before the resulting
value is stored in `a`.

```math
a = cos\left( \frac{\theta}{2} \right)
```


* #### Encoding the axis of rotation into `q`.

The axis which we want to rotate our vector around, needs to be encoded into the vector part of the quaternion
`q`. That is, it needs to be encoded into;

```math
ib + jc + kd 
```

We say that the axis needs to be "encoded", because we can't simply store the axis of rotation - or more
specifically, the values which comprise the axis of rotation, directly into the quaternion `q`.
Instead, we first need to multiply these values by;

```math
sin\left( \frac{\theta}{2} \right)
```

before we can store them into the vector part of the quaternion `q`.

That is;

```math
ib + jc + kd = sin\left( \frac{\theta}{2} \right)[x, y, z]
```

For example, if $\theta = 180^{\circ}$ and $[x, y, z] = [1, 1, 1]$, then we have;

```math
ib + jc + kd = sin\left( \frac{180^{\circ}}{2} \right)[1, 1, 1]
```

which becomes;

```math
ib + jc + kd = sin(90^{\circ})[1, 1, 1]
```

then;

```math
ib + jc + kd = 1 \times [1, 1, 1]
```

and finally;

```math
ib + jc + kd = [1, 1, 1]
```


* ### Why is a quaternion conjugate necessary in order to calculate a rotation?

According to the book Vector, by Robyn Arianrhod, the use of the quaternion conjugate
is necessary, otherwise the resulting value for the rotated vector, will veer off in
the wrong direction in 4-dimensional space. Multiplication by the quaternion conjugate
will bring the result back to where it should be.


* ### Why are the components of the rotation quaternion defined the way they are?

Why is it exactly that the scalar part and the vector part of a rotation quaternion
are defined the way they are? That is, why is;

```math
a = cos\left( \frac{\theta}{2} \right)
```

and

```math
ib + jc + kd = sin\left( \frac{\theta}{2} \right)[x, y, z]
```


* ### Example rotation.

Say we have the following vector;

```math
v = [1, 0, 0]
```

and we want to rotate it counter-clockwise $90^{\circ}$ around the z-axis. When represented
as a quaternion, this vector will look as follows;

```math
v = [0, 1, 0, 0]
```

Next, we should note that since we are attempting to rotate this vector in a counter-clockwise
manner about our axis of interest, our value of theta will therefore be equal
to $-90^{\circ}$. Also, because we are rotating our vector around the z-axis, our axis of
rotation will have the following form;

```math
[0, 1, 0]
```

The scalar part of `q` is easy enough to calculate. It is simply;

```math
a = cos\left( \frac{-90^{\circ}}{2} \right)
```

which becomes;

```math
a = 0.707 
```

Now that we know `a`, we can combine it with the vector component of our rotation quaternion
as follows;

```math
q = 0.707 + sin\left( \frac{-90^{\circ}}{2} \right)[0, 1, 0]
```

which in turn becomes;

```math
q = 0.707 + i0 - j0.707 + k0
```

Simplifying gives us the following value for `q`;

```math
q = 0.707 - j0.707
```

Since the conjugate of any given quaternion is simply the value of the quaternion, but with the
sign of all the imaginary components inverted, the conjugate in this case will be as follows;

```math
q^{*} = 0.707 + j0.707
```

So putting all of this together, yields the following;

```math
v_{rotated} = [0.707, i0, -j0.707, k0][0, i1, j0, k0][0.707, i0, j0.707, k0]
```


* ### Further information about quaternions.

For more information about quaternions, please refer to the documentation
in the doc sub-directory of this package.

A good source of information about both quaternions and vectors, is the book
"Vector", by Robyn Arianrhod. More information about this book can be found
[here](https://isbnsearch.org/isbn/9780226821108).