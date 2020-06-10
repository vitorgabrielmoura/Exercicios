url = 'https://py.checkio.org/en/mission/acceptable-password-iv/'


def is_acceptable_password(password: str) -> bool:
    if len(password) > 9:
        return len(password) > 6 and not password.capitalize() in 'PASSWORD'
    return len(password) > 6 and True in [x.isnumeric() for x in password] and False in [x.isnumeric() for x in password]


print(is_acceptable_password("muchlong5er"))
print(is_acceptable_password("muc5h"))
print(is_acceptable_password("ashort"))
print(is_acceptable_password("password1234"))
print(is_acceptable_password("12345678910"))
print(is_acceptable_password("pass1234word"))
