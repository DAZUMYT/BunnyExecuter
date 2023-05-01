# BunnyExecuter
A custom DuckyScript for a Bash Bunny which executes a file and desactivates Microsoft Windows Defender.

Title: BunnyExecuter
Description: Deployer which deactivates Windows Malware Defender
AUTHOR: DAZUM
Version: 1.5
Category: Execution
Target: Windows 10
Attackmodes: HID, Storage

## Features:

    Desactivation of Windows Defender.
    Execution of file.
    Example payload to check if it works.

## Changes to be made in payload:

    payload.txt = Change keyboard layout (default is set to 'us').
    payload.txt = Change FILE_NAME to the name of the malware.
    payload.exe = replace this file with malware.

## Usage:

    Enter the payload.txt and the malware (by default is payload.exe) into one of the two switchs.
    Connect the Bash Bunny into the victims computer.
    Once there is a green LED indicator, you can take out the Bash Bunny.
