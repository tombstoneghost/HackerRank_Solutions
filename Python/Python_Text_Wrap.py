import textwrap

def wrap(string, max_width):
    str = textwrap.wrap(string,max_width)

    st = ""

    for s in str:
        st = st + s + "\n"

    return st


if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
