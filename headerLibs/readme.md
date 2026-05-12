I see many codebases nowadays boast about how their libraries are 'header-only'. This exploration aims to explore:

1. Why header only libraries are useful
2. What an implementation of header libraries looks like
3. Potential drawbacks of header only libraries

And more. 

Result from compilation: Im adding from add.hpp, result is 7
                            I'm subtracting from sub.hpp, result is 3


The biggest and simplest benefit I saw was that there was absolutely no need for explicit shared library management that needed to be baked into the executable. It's a simple include that works like normal includes of header files.