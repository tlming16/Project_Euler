import sys
from ctypes import cdll
from ctypes import c_char_p, c_int, c_char

pilib = None
pi = None


def load_pi():
    global pilib, pi
    if pilib is None:
        pilib = cdll.LoadLibrary("pi_lib")
    if pi is None:
        pi = pilib.pi
        pi.argtypes = [c_int, c_char_p]
        pi.restype = c_char_p
    return pi


if __name__ == "__main__":
    default_digit = 4000
    if len(sys.argv) == 2:
        try:
            default_digit = int(sys.argv[1])
        except ValueError:
            default_digit = 4000
    if default_digit < 0:
        default_digit = 100

    pi = load_pi()
    buf_type = c_char * (default_digit + 3)
    ans = buf_type()
    ans = pi(default_digit, ans)
    ans = ans.decode('utf-8')
    print("pi:=", ans)
