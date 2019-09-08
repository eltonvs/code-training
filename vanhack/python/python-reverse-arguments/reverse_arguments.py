def reversed_args(f):
    def wrapper(*args, **kwargs):
        return f(*reversed(args), **kwargs)
    return wrapper
