# Nested functions


def outer_function(name):

    def inner_function():
        return f"Hello, {name}!"

    return inner_function()


message = outer_function("Shuvankar")

print(message)