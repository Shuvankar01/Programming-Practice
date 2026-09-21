# Local and global variable scope

message = "Global variable"


def show_scope():
    message = "Local variable"
    print(message)


show_scope()
print(message)