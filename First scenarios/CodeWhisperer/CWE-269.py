Roles = ["ADMIN", "USER", "GUEST"]
#define a function that allows only ADMIN role to print debug information about a system

def debug(system):
    if system.role in Roles:
        print(system.debug())
    else:
        print("You don't have permission to print debug information")