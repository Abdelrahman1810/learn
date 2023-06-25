from math import cos, sin, sqrt, pi, e

def N(a, φ):
    dominator = sqrt( 1-pow( (sin(φ* pi) * e) , 2) )
    N = a/dominator
    return N

def X(a, h, φ, λ):
    X = (N(a, φ) + h) * cos(φ) * cos(λ)
    return X

def Y(a, h, φ, λ):
    Y = (N(a, φ) + h) * cos(φ) * sin(λ)
    return Y

def Z(a, h, φ):
    Z = ((N(a, φ) * (1-pow(e, 2))) + h) * sin(φ)
    return Z

s = input('Wich function you want to use ? ')
φ = float(input('φ =  π × ')) * pi
λ = float(input('λ =  π × ')) * pi
a = float(input('a = '))
h = float(input('h = '))

if s == 'N':
    print(N(a, φ))
elif s == 'X':
    print(X(a, h, φ, λ))
elif s == 'Y':
    print(Y(a, h, φ, λ))
else:
    print(Z(a, h, φ))