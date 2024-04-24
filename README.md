# NeetCode
## This is the place where I practice DSA on LeetCode

C++ Compile and Execute (Required ```make``` package)
```
make run SOURCE=main.cpp
```

C++ Debug using gdb
```
make debug
```

C++ Manual Compile Code Syntax
```
g++ -Wall -std=c++20 \"${file}\" -o \"${file_base_name}\"
```

Example:
```
g++ -Wall -std=c++20 main.cpp -o main
```

## Environment Setup 
### Ubuntu, Linux
- ```make``` normally has been installed on all these kinds of operating systems

### Windows

- Install Chocolately
    - Run Windows Powershell (Recommended version 7+) as administrator
    - Run ```Get-ExecutionPolicy```. If it returns ```Restricted```, then run ```Set-ExecutionPolicy AllSigned``` or ```Set-ExecutionPolicy Bypass -Scope Process```.

    - Install chocolately
        ```shell
        Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
        ```
    
    - Check if the choco has been installed on your local machine
        ```
        choco
        ```

- Install make

    ```
    choco install make
    ```



## Note
### Powershell Profile
```shell
code $PROFILE
```

```ps1
oh-my-posh init pwsh --config "$env:POSH_THEMES_PATH\easy-term.omp.json" | Invoke-Expression
# Import the Chocolatey Profile that contains the necessary code to enable
# tab-completions to function for `choco`.
# Be aware that if you are missing these lines from your profile, tab completion
# for `choco` will not function.
# See https://ch0.co/tab-completion for details.
$ChocolateyProfile = "$env:ChocolateyInstall\helpers\chocolateyProfile.psm1"
if (Test-Path($ChocolateyProfile)) {
  Import-Module "$ChocolateyProfile"
}
```

## Algorithms
- Boyer–Moore majority vote algorithm: https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm



## List of completed Problems
- 1 Two Sum: [https://leetcode.com/problems/two-sum/description/](https://leetcode.com/problems/two-sum/description/) (__need improve__)
- 9 Palindrome Number [https://leetcode.com/problems/palindrome-number/description/](https://leetcode.com/problems/palindrome-number/description/)
- 13 Roman to Integer [https://leetcode.com/problems/roman-to-integer/description/](https://leetcode.com/problems/roman-to-integer/description/)
- 20 Valid Parentheses: [https://leetcode.com/problems/valid-parentheses/description/](https://leetcode.com/problems/valid-parentheses/description/)
- 21 Merge Two Sorted Lists: [https://leetcode.com/problems/merge-two-sorted-lists/description/](https://leetcode.com/problems/merge-two-sorted-lists/description/)
- 26 Remove Duplicates from Sorted Array: [https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)
- 27 Remove Element: [https://leetcode.com/problems/remove-element/description/](https://leetcode.com/problems/remove-element/description/)
- 88 Merge Sorted Array: [https://leetcode.com/problems/merge-sorted-array/](https://leetcode.com/problems/merge-sorted-array/)
- 155 Min Stack
- 169 Majority Element
- 191 Number of 1 Bits
- 206 Reverse Linked List
- 217 Contains Duplicate
- 682 Baseball game
- 1929 Concatenation of Array