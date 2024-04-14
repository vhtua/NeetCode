# NeetCode
## This is the place where I practice DSA on LeetCode


C++ Manual Compile Code Syntax
```
g++ -Wall -std=c++20 \"${file}\" -o \"${file_base_name}\"
```

Example:
```
g++ -Wall -std=c++20 main.cpp -o main
```

## Environment Setup 
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