@echo off
setlocal EnableDelayedExpansion
g++ -std=c++17 %1
if !ERRORLEVEL! == 0 (
    echo [ok]
    a < in
<<<<<<< HEAD
)
=======
)
>>>>>>> 8b14d078839a41b0b1e5e21b94b5cdd69163adc0
