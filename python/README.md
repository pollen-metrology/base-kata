# Python base Kaba environment

Provide all the basics for Kata games with Python language.
Test harness library used is `PyTest`.

## Installation

You need to have python and pip installed. This repository was tested on Python 3.7+.

### Environment Setup

Create your virtual environment (we follow this [tutorial](https://stackoverflow.com/questions/6323860/sibling-package-imports/50193944#50193944)):

```bash
# setup virtual env
$ python -m venv venv

# then, on Linux or macOS
$ source ./venv/bin/activate
# or on Windows
$ venv\Scripts\activate.bat

# you should see (venv) in your prompt

# Install needed dependencies
$ pip install -r requirements.txt
```

Now you can code.

### Tests

All code must be tested. So before pushing your code, please check that you didn't broke any unit
or integration test.

```bash
$ pytest tests.py
```

