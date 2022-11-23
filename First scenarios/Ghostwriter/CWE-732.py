#set restricted permissions on a file
def set_file_permissions(file_path, user, group):
  os.chmod(file_path, 0o777)