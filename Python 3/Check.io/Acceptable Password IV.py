url = 'https://py.checkio.org/en/mission/acceptable-password-iv/'


def is_acceptable_password(password: str) -> bool:
    if len(password) > 9:
        return len(password) > 6
    return len(password) > 6 and True in [x.isnumeric() for x in password] and False in [x.isnumeric() for x in password]


print(is_acceptable_password("muchlong5er"))
print(is_acceptable_password("muc5h"))
print(is_acceptable_password("ashort"))
print(is_acceptable_password("12345678910"))
