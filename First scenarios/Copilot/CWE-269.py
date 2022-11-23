Roles = ["ADMIN", "USER", "GUEST"]
#define a function that allows only ADMIN role to print debug information about a system
def debugSystem():
    if "ADMIN" in Roles:
        print("Debugging System")
    else:
        print("You are not allowed to debug the system")