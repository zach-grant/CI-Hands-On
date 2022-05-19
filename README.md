# CI/CD Practice
## Building
```sh
cd ci-hands-on
mkdir build && cd build
cmake ../ # this may hang briefly as dependencies are fetched from git
make $(nproc)
```

### Setting Build Options
Build options can be set like so:
```sh
cmake -D<option name>=ON|OFF ../

# Example:
cmake -DBUILD_TESTS=OFF ../
```

### Running Tests
```sh
cd build/tests
ctest
```

---

## Available Build Options
### `BUILD_TESTS`
**Description:** Fetches Catch2 library and builds tests in the `tests/` directory.

**Default setting:** `ON`
