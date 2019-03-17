import re


def main():
    username = '#jerry_friend_friend_friend'
    # m = re.match(r'\w{8,20}', username)
    # print("m:",m)
    # print("The subscript of m:",m.span())  # span()，如果匹配值成功，则返回匹配成功的下标
    # print("Matched words in m:",m.group())  # group（）， 匹配成功，返回匹配成功后的部分
    n = re.search(r'\w{8,20}', username)
    print("n:", n)
    print("The subscript of n:", n.span())  # span()，如果匹配值成功，则返回匹配成功的下标
    print("Matched words in n:", n.group())


if __name__ == '__main__':
    main()