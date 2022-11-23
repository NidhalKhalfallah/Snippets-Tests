#define a function to create a bank account

def create_account(first_name,last_name,balance):
    """Create a bank account"""
    account = {}
    account['first_name'] = first_name
    account['last_name'] = last_name
    account['balance'] = balance
    return account