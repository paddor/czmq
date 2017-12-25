################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
from setuptools import setup

setup(
    name = "czmq_cffi",
    version = "4.1.0",
    license = "mplv2",
    description = """Python cffi bindings of: the high-level c binding for 0mq""",
    packages = ["czmq_cffi", ],
    setup_requires=["cffi"],
    cffi_modules=[
           "czmq_cffi/build.py:ffibuilder",
           "czmq_cffi/build.py:ffidestructorbuilder"
    ],
    install_requires=["cffi"],
)
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
