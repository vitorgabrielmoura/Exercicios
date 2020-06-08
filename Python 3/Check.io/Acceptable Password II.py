url = 'https://py.checkio.org/pt-br/mission/acceptable-password-ii/'


def is_acceptable_password(password: str) -> bool:
    return len(password) > 6 and True in [x.isnumeric() for x in password]

print(is_acceptable_password("muchlonger5"))
print(is_acceptable_password("muc5h"))
print(is_acceptable_password("ashort"))
print(is_acceptable_password("short"))