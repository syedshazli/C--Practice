// we rely on compilers for optimization
// we want to have optimization that makes best use of underlying hardware

// different kinds of optimziation levels
// how much memory compiler uses, speed
// how big executable gets

// most optimziation levels are ignored when using -o flag

// -01 optimization
    // compiler tried to reduce code size + execution time
    // doesnt try to take too long

// -02 optimization
    // gcc wil; perform nearly all opitimziations that don't delve into space vs speed trade off
    // includes all flags from 01

// -03 turns on even more optimization flags, even ones from -02 and -01