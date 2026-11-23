# octiq-cmake-build-test

CMake/C++ fixture with a real configure + compile step. No tests: sync only
asks whether the tree builds.

Used to exercise the indexed tier's sync build verdict for the `cmake` recipe:

* import → baseline is green
* push a commit that breaks `src/main.cpp` → one `INDEXED_BUILD_FAILED` mail
* push the fix → "build is green again"
