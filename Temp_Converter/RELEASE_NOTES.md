# Temperature Converter Release Notes

## Version 1.0.0

### Added

- Command-line temperature converter interface.
- Fahrenheit-to-Celsius conversion.
- Fahrenheit-to-Kelvin conversion.
- Celsius-to-Fahrenheit conversion.
- Celsius-to-Kelvin conversion.
- Kelvin-to-Celsius conversion.
- Kelvin-to-Fahrenheit conversion.
- Invalid menu-choice message.
- Press-Enter-to-exit behavior.

### Technical Details

- Written in C++.
- Uses `double` values for temperature calculations.
- Uses `iostream` for console input and output.
- Uses `if` and `else if` statements to select the conversion.
- Includes `<limits>` for `std::numeric_limits` when clearing the input buffer.

### Build

Compile the program with:

```powershell
g++ Temp_Converter.cpp -o Temp_Converter.exe
```

Run it with:

```powershell
& ".\\Temp_Converter.exe"
```

### Known Limitations

- Only one conversion can be performed per run.
- Non-numeric input is not currently validated.
- Physically invalid Kelvin values are not currently checked.
