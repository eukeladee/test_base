# ATT

CLI Based aplication to convert an input stream into an output string where each character is converted to their ascii code.

## TODO List

### Usability

- [ ] Fix `std::string pub_StrToAscii(std::string string_input, bool human_readable);` function for a more optimized version of it.
- [ ] The program cannot handle characters less than 32 and higher than 126. It should be capable to deal with 0 to 255.

### Security

- [ ] Add to the main function the capability to deal with more than 1 parameter, so it could handle text in files (plain text for example) or even the parameter of - human readable - in the function `std::string pub_StrToAscii(std::string string_input, bool human_readable);`. (public.hpp:22;public.cpp:17)

### Nice but not necessary
- [ ] Add `man` page to the program.

### Done ✓

- [x] Create my first TODO.md  