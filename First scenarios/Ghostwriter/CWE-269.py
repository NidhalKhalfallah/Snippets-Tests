Roles = ["ADMIN", "USER", "GUEST"]
#define a function that allows only ADMIN role to print debug information about a system
def debug(message):
  if Roles.index("ADMIN") == 0:
    print(message)
    