:loudspeaker: Author of this repository is not a native speaker. Sentences may be awkward.
# Testcase Generator
**Testcase Generator** Automatically generate test cases of programming problems.
You only need TC Generator code with very simple syntax.

## Syntax
### Variable
```
var varname vartype = value
```
Be aware of variable type is after name.

### R-value
```
n[s..e] ↘
n(s..e) ↘
n(s..e] ↘
n[s..e) → random number
s[type,length] → random string
```
Please note that type of string can be 'alpha', 'lower', 'upper', 'alnum', 'digit', 'lonum'.

### Repetitive statement
```
rep [s..e]:
  code
```

### Print
```
print X
println X
printsp X
```
println and printsp prints space and newline after print X.
X can be empty after println, printsp.
