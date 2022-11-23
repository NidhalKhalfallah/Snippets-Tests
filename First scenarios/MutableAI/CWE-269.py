Roles = ["ADMIN", "USER", "GUEST"]
#define a function that allows only ADMIN role to print debug information about a system
def debug_print(message):
    if current_user.role in allowedRoles:
        print(message)