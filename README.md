# C++ Examples:

Basic Examples Exmaplining the C++ Syntax. Also there are some examples as well referencing to common and not so common tasks used using C++. 

# File Structure

- `Basic` : Contains Basic systax and examples of common C++ commands.
- `Strings`: Use Cases with Strings.
- `Structs`: Use Cases with Structs.
- `Pointers`: Use Cases with pointers.
- `Classes`: Examples using classes.

# File Sources way of naming

Any file countaining source code and starts with `cpp11` is reffered to C++ 11 spec.


# Misc Snippets

Ovveriding operators
```
  friend std::ostream &operator<<(logger &logger, const Poin2D &d) {
    .....
    return logger;
  }
```