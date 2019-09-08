from reverse_arguments import reversed_args as r

# TC1
def common_function(arg1, arg2):
    return arg1, arg2

assert(common_function(1, 2) == (1, 2))
assert(r(common_function)(1, 2) == (2, 1))
assert(r(r(common_function))(1, 2) == common_function(1, 2))

# TC2
def function_with_named_args(*, arg1, arg2):
    return arg1, arg2

assert(function_with_named_args(arg1=1, arg2=2) == (1, 2))
assert(r(function_with_named_args)(arg1=1, arg2=2) == (1, 2))
assert(r(r(function_with_named_args))(arg1=1, arg2=2) == function_with_named_args(arg1=1, arg2=2))

# TC3
def function_without_args():
    return 1, 2

assert(function_without_args() == (1, 2))
assert(r(function_without_args)() == (1, 2))
assert(r(r(function_without_args))() == function_without_args())

# TC4
def function_with_both_args(arg1, arg2, *, narg1, narg2):
    return arg1, arg2, narg1, narg2

assert(function_with_both_args(1, 2, narg1=3, narg2=4) == (1, 2, 3, 4))
assert(r(function_with_both_args)(1, 2, narg1=3, narg2=4) == (2, 1, 3, 4))
assert(r(r(function_with_both_args))(1, 2, narg1=3, narg2=4) == function_with_both_args(1, 2, narg1=3, narg2=4))

# TC5
def function_with_default_args(arg1=1, arg2=2):
    return arg1, arg2

assert(function_with_default_args() == (1, 2))
assert(function_with_default_args(3) == (3, 2))
assert(function_with_default_args(3, 4) == (3, 4))
assert(r(function_with_default_args)() == (1, 2))
assert(r(function_with_default_args)(3) == (3, 2))
assert(r(function_with_default_args)(3, 4) == (4, 3))
assert(r(r(function_with_default_args))() == function_with_default_args())
assert(r(r(function_with_default_args))(3) == function_with_default_args(3))
assert(r(r(function_with_default_args))(3, 4) == function_with_default_args(3, 4))
