Hello everyone, here is the complete code for my Libft, which has passed both peer evaluation and moulinette testing.

1. I highly recommend using testers like francinette to test your program. These testers provide some extreme tests that help us find vulnerabilities in our functions, which will be very helpful for future work. This is because moulinette’s tests are clearly not extreme enough.

2. Be mindful of memory leaks, especially in `ft_split`.

3. It's worth mentioning that the functions with the `fd` suffix should include checks for `fd < 0`. However, francinette on the 42 school computers may lack certain permissions, causing it to randomly return `fd = -1` and require output strings. This testing itself has issues, and can be resolved by modifying the test file to force a return when `fd < 0`.

These are some insights I gained while completing this project. Keep it up!
