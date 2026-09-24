# Function closure


def multiplier(factor):

    def multiply(number):
        return number * factor

    return multiply


double = multiplier(2)
triple = multiplier(3)

print("Double:", double(10))
print("Triple:", triple(10))